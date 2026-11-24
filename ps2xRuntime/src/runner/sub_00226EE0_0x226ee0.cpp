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

// Function: sub_00226EE0
// Address: 0x226ee0 - 0x226f70
void sub_00226EE0_0x226ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226EE0_0x226ee0");
#endif

    switch (ctx->pc) {
        case 0x226efcu: goto label_226efc;
        case 0x226f18u: goto label_226f18;
        default: break;
    }

    ctx->pc = 0x226ee0u;

    // 0x226ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226ee8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x226ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226ef4: 0xc089c6a  jal         func_2271A8
    ctx->pc = 0x226EF4u;
    SET_GPR_U32(ctx, 31, 0x226EFCu);
    ctx->pc = 0x226EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EF4u;
    // 0x226ef8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271A8u, 0x226EF4u, 0x226EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EFCu;
label_226efc:
    // 0x226efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f00: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x226F00u;
    {
        const bool branch_taken_0x226f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x226f00) {
            ctx->pc = 0x226F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F00u;
            // 0x226f04: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F50u;
            goto label_226f50;
        }
    }
    ctx->pc = 0x226F08u;
    // 0x226f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f14: 0x0  nop
    ctx->pc = 0x226f14u;
    // NOP
label_226f18:
    // 0x226f18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226f1c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x226f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x226f20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x226f24: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x226f28: 0x28830100  slti        $v1, $a0, 0x100
    ctx->pc = 0x226f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x226f2c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x226f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x226f30: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x226F30u;
    {
        const bool branch_taken_0x226f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F30u;
        // 0x226f34: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f30) {
            ctx->pc = 0x226F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226f18;
        }
    }
    ctx->pc = 0x226F38u;
    // 0x226f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226f3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226f44: 0x3e00008  jr          $ra
    ctx->pc = 0x226F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F44u;
        // 0x226f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226F4Cu;
    // 0x226f4c: 0x0  nop
    ctx->pc = 0x226f4cu;
    // NOP
label_226f50:
    // 0x226f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226f58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226f60: 0x24c693f0  addiu       $a2, $a2, -0x6C10
    ctx->pc = 0x226f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939632));
    // 0x226f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f68: 0x80898b2  j           func_2262C8
    ctx->pc = 0x226F68u;
    ctx->pc = 0x226F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F68u;
    // 0x226f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x226F70u;
}
