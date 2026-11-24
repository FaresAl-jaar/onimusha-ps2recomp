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

// Function: sub_00340010
// Address: 0x340010 - 0x3400c0
void sub_00340010_0x340010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340010_0x340010");
#endif

    switch (ctx->pc) {
        case 0x340024u: goto label_340024;
        case 0x340044u: goto label_340044;
        case 0x340070u: goto label_340070;
        case 0x340084u: goto label_340084;
        default: break;
    }

    ctx->pc = 0x340010u;

    // 0x340010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34001c: 0xc097f7c  jal         func_25FDF0
    ctx->pc = 0x34001Cu;
    SET_GPR_U32(ctx, 31, 0x340024u);
    ctx->pc = 0x340020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34001Cu;
    // 0x340020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDF0u, 0x34001Cu, 0x340024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340024u;
label_340024:
    // 0x340024: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x340024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x340028: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x340028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x34002c: 0x3446130d  ori         $a2, $v0, 0x130D
    ctx->pc = 0x34002cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4877);
    // 0x340030: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x340030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x340034: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x340034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x340038: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x340038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x34003c: 0xc0a7a78  jal         func_29E9E0
    ctx->pc = 0x34003Cu;
    SET_GPR_U32(ctx, 31, 0x340044u);
    ctx->pc = 0x340040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34003Cu;
    // 0x340040: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E0u, 0x34003Cu, 0x340044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340044u;
label_340044:
    // 0x340044: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x340044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x340048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34004c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34004cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340050: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x340050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340054: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x340054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x340058: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x340058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x34005c: 0xae0028d0  sw          $zero, 0x28D0($s0)
    ctx->pc = 0x34005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10448), GPR_U32(ctx, 0));
    // 0x340060: 0xae0028d4  sw          $zero, 0x28D4($s0)
    ctx->pc = 0x340060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 0));
    // 0x340064: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x340064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x340068: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x340068u;
    SET_GPR_U32(ctx, 31, 0x340070u);
    ctx->pc = 0x34006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340068u;
    // 0x34006c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x340068u, 0x340070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340070u;
label_340070:
    // 0x340070: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x340070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x340074: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x340074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x340078: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x340078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x34007c: 0xc060b00  jal         func_182C00
    ctx->pc = 0x34007Cu;
    SET_GPR_U32(ctx, 31, 0x340084u);
    ctx->pc = 0x340080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34007Cu;
    // 0x340080: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C00u, 0x34007Cu, 0x340084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340084u;
label_340084:
    // 0x340084: 0x8e07085c  lw          $a3, 0x85C($s0)
    ctx->pc = 0x340084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x340088: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x340088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x34008c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x340090: 0x8ce5004c  lw          $a1, 0x4C($a3)
    ctx->pc = 0x340090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x340094: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x340094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x340098: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x340098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x34009c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x34009cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3400a0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3400a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3400a4: 0xace304c4  sw          $v1, 0x4C4($a3)
    ctx->pc = 0x3400a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1220), GPR_U32(ctx, 3));
    // 0x3400a8: 0xace304c8  sw          $v1, 0x4C8($a3)
    ctx->pc = 0x3400a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1224), GPR_U32(ctx, 3));
    // 0x3400ac: 0xace304cc  sw          $v1, 0x4CC($a3)
    ctx->pc = 0x3400acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1228), GPR_U32(ctx, 3));
    // 0x3400b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3400b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3400b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3400b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3400b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3400B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3400BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400B8u;
        // 0x3400bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3400B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3400C0u;
}
