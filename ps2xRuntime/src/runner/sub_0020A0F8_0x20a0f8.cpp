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

// Function: sub_0020A0F8
// Address: 0x20a0f8 - 0x20a158
void sub_0020A0F8_0x20a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A0F8_0x20a0f8");
#endif

    switch (ctx->pc) {
        case 0x20a114u: goto label_20a114;
        default: break;
    }

    ctx->pc = 0x20a0f8u;

    // 0x20a0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a100: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a10c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A10Cu;
    SET_GPR_U32(ctx, 31, 0x20A114u);
    ctx->pc = 0x20A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A10Cu;
    // 0x20a110: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A10Cu, 0x20A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A114u;
label_20a114:
    // 0x20a114: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a11c: 0x24848298  addiu       $a0, $a0, -0x7D68
    ctx->pc = 0x20a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935192));
    // 0x20a120: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A120u;
    {
        const bool branch_taken_0x20a120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A120u;
        // 0x20a124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a120) {
            ctx->pc = 0x20A140u;
            goto label_20a140;
        }
    }
    ctx->pc = 0x20A128u;
    // 0x20a128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a12c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a12cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a134: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A134u;
    ctx->pc = 0x20A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A134u;
    // 0x20a138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A13Cu;
    // 0x20a13c: 0x0  nop
    ctx->pc = 0x20a13cu;
    // NOP
label_20a140:
    // 0x20a140: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x20a140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x20a144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a14c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a150: 0x8092fd2  j           func_24BF48
    ctx->pc = 0x20A150u;
    ctx->pc = 0x20A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A150u;
    // 0x20a154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF48u;
    sub_0024BF48_0x24bf48(rdram, ctx, runtime); return;
    ctx->pc = 0x20A158u;
}
