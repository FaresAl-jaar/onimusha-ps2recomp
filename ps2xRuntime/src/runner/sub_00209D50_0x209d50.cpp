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

// Function: sub_00209D50
// Address: 0x209d50 - 0x209dbc
void sub_00209D50_0x209d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209D50_0x209d50");
#endif

    switch (ctx->pc) {
        case 0x209d6cu: goto label_209d6c;
        case 0x209da0u: goto label_209da0;
        default: break;
    }

    ctx->pc = 0x209d50u;

    // 0x209d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209d60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209d64: 0xc081d84  jal         func_207610
    ctx->pc = 0x209D64u;
    SET_GPR_U32(ctx, 31, 0x209D6Cu);
    ctx->pc = 0x209D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D64u;
    // 0x209d68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209D64u, 0x209D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D6Cu;
label_209d6c:
    // 0x209d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d70: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209D70u;
    {
        const bool branch_taken_0x209d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D70u;
        // 0x209d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d70) {
            ctx->pc = 0x209D98u;
            goto label_209d98;
        }
    }
    ctx->pc = 0x209D78u;
    // 0x209d78: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209d84: 0x24848160  addiu       $a0, $a0, -0x7EA0
    ctx->pc = 0x209d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934880));
    // 0x209d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209d8c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x209D8Cu;
    ctx->pc = 0x209D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D8Cu;
    // 0x209d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x209D94u;
    // 0x209d94: 0x0  nop
    ctx->pc = 0x209d94u;
    // NOP
label_209d98:
    // 0x209d98: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209D98u;
    SET_GPR_U32(ctx, 31, 0x209DA0u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209D98u, 0x209DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DA0u;
label_209da0:
    // 0x209da0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209db4: 0x808997e  j           func_2265F8
    ctx->pc = 0x209DB4u;
    ctx->pc = 0x209DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DB4u;
    // 0x209db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F8u;
    sub_002265F8_0x2265f8(rdram, ctx, runtime); return;
    ctx->pc = 0x209DBCu;
}
