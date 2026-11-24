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

// Function: sub_00298E30
// Address: 0x298e30 - 0x298e70
void sub_00298E30_0x298e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298E30_0x298e30");
#endif

    switch (ctx->pc) {
        case 0x298e30u: goto label_298e30;
        case 0x298e34u: goto label_298e34;
        case 0x298e38u: goto label_298e38;
        case 0x298e3cu: goto label_298e3c;
        case 0x298e40u: goto label_298e40;
        case 0x298e44u: goto label_298e44;
        case 0x298e48u: goto label_298e48;
        case 0x298e4cu: goto label_298e4c;
        case 0x298e50u: goto label_298e50;
        case 0x298e54u: goto label_298e54;
        case 0x298e58u: goto label_298e58;
        case 0x298e5cu: goto label_298e5c;
        case 0x298e60u: goto label_298e60;
        case 0x298e64u: goto label_298e64;
        case 0x298e68u: goto label_298e68;
        case 0x298e6cu: goto label_298e6c;
        default: break;
    }

    ctx->pc = 0x298e30u;

label_298e30:
    // 0x298e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_298e34:
    // 0x298e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_298e38:
    // 0x298e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_298e3c:
    // 0x298e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298e40:
    // 0x298e40: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x298e40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_298e44:
    // 0x298e44: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x298e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_298e48:
    // 0x298e48: 0xc05d4c8  jal         func_175320
label_298e4c:
    if (ctx->pc == 0x298E4Cu) {
        ctx->pc = 0x298E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E48u;
        // 0x298e4c: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E50u;
        goto label_298e50;
    }
    ctx->pc = 0x298E48u;
    SET_GPR_U32(ctx, 31, 0x298E50u);
    ctx->pc = 0x298E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E48u;
    // 0x298e4c: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175320u, 0x298E48u, 0x298E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E50u;
label_298e50:
    // 0x298e50: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x298e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_298e54:
    // 0x298e54: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x298e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_298e58:
    // 0x298e58: 0x320f809  jalr        $t9
label_298e5c:
    if (ctx->pc == 0x298E5Cu) {
        ctx->pc = 0x298E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E58u;
        // 0x298e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E60u;
        goto label_298e60;
    }
    ctx->pc = 0x298E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x298E60u);
        ctx->pc = 0x298E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E58u;
        // 0x298e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E58u, 0x298E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298E60u;
label_298e60:
    // 0x298e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298e64:
    // 0x298e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_298e68:
    // 0x298e68: 0x3e00008  jr          $ra
label_298e6c:
    if (ctx->pc == 0x298E6Cu) {
        ctx->pc = 0x298E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E68u;
        // 0x298e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E70u;
        goto label_fallthrough_0x298e68;
    }
    ctx->pc = 0x298E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E68u;
        // 0x298e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x298e68:
    ctx->pc = 0x298E70u;
}
