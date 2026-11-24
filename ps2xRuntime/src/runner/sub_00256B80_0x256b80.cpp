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

// Function: sub_00256B80
// Address: 0x256b80 - 0x256c78
void sub_00256B80_0x256b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256B80_0x256b80");
#endif

    switch (ctx->pc) {
        case 0x256c18u: goto label_256c18;
        default: break;
    }

    ctx->pc = 0x256b80u;

    // 0x256b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x256b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x256b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x256b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x256b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b94: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x256b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256b98: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x256b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x256b9c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x256b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256ba0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x256ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x256ba4: 0x30420110  andi        $v0, $v0, 0x110
    ctx->pc = 0x256ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)272);
    // 0x256ba8: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x256ba8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x256bac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x256BACu;
    {
        const bool branch_taken_0x256bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BACu;
        // 0x256bb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bac) {
            ctx->pc = 0x256BE0u;
            goto label_256be0;
        }
    }
    ctx->pc = 0x256BB4u;
    // 0x256bb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x256bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x256bb8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x256bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x256bbc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x256BBCu;
    {
        const bool branch_taken_0x256bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x256bbc) {
            ctx->pc = 0x256BE8u;
            goto label_256be8;
        }
    }
    ctx->pc = 0x256BC4u;
    // 0x256bc4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x256bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x256bc8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x256bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x256bcc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256BCCu;
    {
        const bool branch_taken_0x256bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x256BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BCCu;
        // 0x256bd0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bcc) {
            ctx->pc = 0x256BE0u;
            goto label_256be0;
        }
    }
    ctx->pc = 0x256BD4u;
    // 0x256bd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256BD4u;
    {
        const bool branch_taken_0x256bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x256bd4) {
            ctx->pc = 0x256BE8u;
            goto label_256be8;
        }
    }
    ctx->pc = 0x256BDCu;
    // 0x256bdc: 0x0  nop
    ctx->pc = 0x256bdcu;
    // NOP
label_256be0:
    // 0x256be0: 0xa4a0002c  sh          $zero, 0x2C($a1)
    ctx->pc = 0x256be0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x256be4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x256be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256be8:
    // 0x256be8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x256be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x256bec: 0x8462002c  lh          $v0, 0x2C($v1)
    ctx->pc = 0x256becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x256bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256BF0u;
    {
        const bool branch_taken_0x256bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BF0u;
        // 0x256bf4: 0x2464002c  addiu       $a0, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bf0) {
            ctx->pc = 0x256C08u;
            goto label_256c08;
        }
    }
    ctx->pc = 0x256BF8u;
    // 0x256bf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256bfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x256BFCu;
    {
        const bool branch_taken_0x256bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BFCu;
        // 0x256c00: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bfc) {
            ctx->pc = 0x256C60u;
            goto label_256c60;
        }
    }
    ctx->pc = 0x256C04u;
    // 0x256c04: 0x0  nop
    ctx->pc = 0x256c04u;
    // NOP
label_256c08:
    // 0x256c08: 0x90650024  lbu         $a1, 0x24($v1)
    ctx->pc = 0x256c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x256c0c: 0x90660028  lbu         $a2, 0x28($v1)
    ctx->pc = 0x256c0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x256c10: 0xc095f24  jal         func_257C90
    ctx->pc = 0x256C10u;
    SET_GPR_U32(ctx, 31, 0x256C18u);
    ctx->pc = 0x256C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C10u;
    // 0x256c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257C90u, 0x256C10u, 0x256C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C18u;
label_256c18:
    // 0x256c18: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x256c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x256c1c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x256c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x256c20: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x256c20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x256c24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x256c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x256c28: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x256c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x256c2c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x256c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x256c30: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x256c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x256c34: 0x8462001e  lh          $v0, 0x1E($v1)
    ctx->pc = 0x256c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x256c38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x256c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x256c3c: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x256c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x256c40: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x256c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x256c44: 0x9062002e  lbu         $v0, 0x2E($v1)
    ctx->pc = 0x256c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x256c48: 0xa462002c  sh          $v0, 0x2C($v1)
    ctx->pc = 0x256c48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x256c4c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x256c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x256c50: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x256c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x256c54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x256C54u;
    {
        const bool branch_taken_0x256c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256c54) {
            ctx->pc = 0x256C60u;
            goto label_256c60;
        }
    }
    ctx->pc = 0x256C5Cu;
    // 0x256c5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x256c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256c60:
    // 0x256c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x256c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256c70: 0x3e00008  jr          $ra
    ctx->pc = 0x256C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C70u;
        // 0x256c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256C78u;
}
