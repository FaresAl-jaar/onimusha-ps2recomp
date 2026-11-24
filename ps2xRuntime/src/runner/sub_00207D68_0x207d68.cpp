#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207D68
// Address: 0x207d68 - 0x207dd8
void sub_00207D68_0x207d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207D68_0x207d68");
#endif

    switch (ctx->pc) {
        case 0x207d8cu: goto label_207d8c;
        default: break;
    }

    ctx->pc = 0x207d68u;

    // 0x207d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207d78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207d80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207d84: 0xc081d84  jal         func_207610
    ctx->pc = 0x207D84u;
    SET_GPR_U32(ctx, 31, 0x207D8Cu);
    ctx->pc = 0x207D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D84u;
    // 0x207d88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207D84u, 0x207D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D8Cu;
label_207d8c:
    // 0x207d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d98: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x207D98u;
    {
        const bool branch_taken_0x207d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D98u;
        // 0x207d9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d98) {
            ctx->pc = 0x207DC0u;
            goto label_207dc0;
        }
    }
    ctx->pc = 0x207DA0u;
    // 0x207da0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207dac: 0x248479d8  addiu       $a0, $a0, 0x79D8
    ctx->pc = 0x207dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31192));
    // 0x207db0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207db4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207db8: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x207DB8u;
    ctx->pc = 0x207DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DB8u;
    // 0x207dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x207DC0u;
label_207dc0:
    // 0x207dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207dc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207dcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207dd0: 0x8081ab2  j           func_206AC8
    ctx->pc = 0x207DD0u;
    ctx->pc = 0x207DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DD0u;
    // 0x207dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206AC8u;
    sub_00206AC8_0x206ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x207DD8u;
}
