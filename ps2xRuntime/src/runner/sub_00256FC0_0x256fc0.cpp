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

// Function: sub_00256FC0
// Address: 0x256fc0 - 0x25709c
void sub_00256FC0_0x256fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256FC0_0x256fc0");
#endif

    switch (ctx->pc) {
        case 0x256fe8u: goto label_256fe8;
        case 0x257004u: goto label_257004;
        case 0x257024u: goto label_257024;
        case 0x257058u: goto label_257058;
        case 0x257080u: goto label_257080;
        default: break;
    }

    ctx->pc = 0x256fc0u;

    // 0x256fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256fcc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x256fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256fd0: 0x906200a1  lbu         $v0, 0xA1($v1)
    ctx->pc = 0x256fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 161)));
    // 0x256fd4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x256FD4u;
    {
        const bool branch_taken_0x256fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FD4u;
        // 0x256fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fd4) {
            ctx->pc = 0x257028u;
            goto label_257028;
        }
    }
    ctx->pc = 0x256FDCu;
    // 0x256fdc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x256fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x256fe0: 0xc095f80  jal         func_257E00
    ctx->pc = 0x256FE0u;
    SET_GPR_U32(ctx, 31, 0x256FE8u);
    ctx->pc = 0x256FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FE0u;
    // 0x256fe4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E00u, 0x256FE0u, 0x256FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FE8u;
label_256fe8:
    // 0x256fe8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ff0: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x256ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x256ff4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256ff8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x256ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x256ffc: 0xc095f80  jal         func_257E00
    ctx->pc = 0x256FFCu;
    SET_GPR_U32(ctx, 31, 0x257004u);
    ctx->pc = 0x257000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256FFCu;
    // 0x257000: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E00u, 0x256FFCu, 0x257004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257004u;
label_257004:
    // 0x257004: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x257004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x257008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25700c: 0xa462001c  sh          $v0, 0x1C($v1)
    ctx->pc = 0x25700cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x257010: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x257010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x257014: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x257014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257018: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x257018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x25701c: 0xc0ca588  jal         func_329620
    ctx->pc = 0x25701Cu;
    SET_GPR_U32(ctx, 31, 0x257024u);
    ctx->pc = 0x257020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25701Cu;
    // 0x257020: 0xa062009f  sb          $v0, 0x9F($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 159), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329620u, 0x25701Cu, 0x257024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257024u;
label_257024:
    // 0x257024: 0x0  nop
    ctx->pc = 0x257024u;
    // NOP
label_257028:
    // 0x257028: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x257028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25702c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257030: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x257030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257034: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x257034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x257038: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x257038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x25703c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x25703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x257040: 0x94490024  lhu         $t1, 0x24($v0)
    ctx->pc = 0x257040u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x257044: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x257044u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x257048: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x257048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25704c: 0x8448001a  lh          $t0, 0x1A($v0)
    ctx->pc = 0x25704cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x257050: 0xc095e0c  jal         func_257830
    ctx->pc = 0x257050u;
    SET_GPR_U32(ctx, 31, 0x257058u);
    ctx->pc = 0x257054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257050u;
    // 0x257054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257830u, 0x257050u, 0x257058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257058u;
label_257058:
    // 0x257058: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x257058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25705c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257060: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x257060u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x257064: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x257064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x257068: 0x94490028  lhu         $t1, 0x28($v0)
    ctx->pc = 0x257068u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25706c: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x25706cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x257070: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x257070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x257074: 0x8448001c  lh          $t0, 0x1C($v0)
    ctx->pc = 0x257074u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x257078: 0xc095e30  jal         func_2578C0
    ctx->pc = 0x257078u;
    SET_GPR_U32(ctx, 31, 0x257080u);
    ctx->pc = 0x25707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257078u;
    // 0x25707c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2578C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578C0u, 0x257078u, 0x257080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257080u;
label_257080:
    // 0x257080: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x257080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x257084: 0xa4620020  sh          $v0, 0x20($v1)
    ctx->pc = 0x257084u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x257088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25708c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257094: 0x3e00008  jr          $ra
    ctx->pc = 0x257094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257094u;
        // 0x257098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25709Cu;
}
