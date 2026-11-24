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

// Function: sub_002CCD60
// Address: 0x2ccd60 - 0x2cce4c
void sub_002CCD60_0x2ccd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCD60_0x2ccd60");
#endif

    switch (ctx->pc) {
        case 0x2ccdacu: goto label_2ccdac;
        case 0x2ccdc4u: goto label_2ccdc4;
        case 0x2ccdd4u: goto label_2ccdd4;
        case 0x2ccde4u: goto label_2ccde4;
        case 0x2ccdf4u: goto label_2ccdf4;
        case 0x2cce24u: goto label_2cce24;
        case 0x2cce38u: goto label_2cce38;
        default: break;
    }

    ctx->pc = 0x2ccd60u;

    // 0x2ccd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ccd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ccd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ccd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ccd68: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x2ccd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2ccd6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ccd70: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x2ccd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2ccd74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ccd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ccd78: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x2ccd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2ccd7c: 0xc7808248  lwc1        $f0, -0x7DB8($gp)
    ctx->pc = 0x2ccd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd80: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x2ccd80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ccd84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ccd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd88: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2ccd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2ccd8c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2ccd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2ccd90: 0xc780824c  lwc1        $f0, -0x7DB4($gp)
    ctx->pc = 0x2ccd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd94: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2ccd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ccd98: 0x87838250  lh          $v1, -0x7DB0($gp)
    ctx->pc = 0x2ccd98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935120)));
    // 0x2ccd9c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2ccd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccda0: 0x9045003c  lbu         $a1, 0x3C($v0)
    ctx->pc = 0x2ccda0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2ccda4: 0xc050d80  jal         func_143600
    ctx->pc = 0x2CCDA4u;
    SET_GPR_U32(ctx, 31, 0x2CCDACu);
    ctx->pc = 0x2CCDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDA4u;
    // 0x2ccda8: 0x27848548  addiu       $a0, $gp, -0x7AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143600u, 0x2CCDA4u, 0x2CCDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDACu;
label_2ccdac:
    // 0x2ccdac: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2ccdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2ccdb0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ccdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ccdb4: 0x94500038  lhu         $s0, 0x38($v0)
    ctx->pc = 0x2ccdb4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2ccdb8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2ccdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2ccdbc: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x2CCDBCu;
    SET_GPR_U32(ctx, 31, 0x2CCDC4u);
    ctx->pc = 0x2CCDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDBCu;
    // 0x2ccdc0: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x2CCDBCu, 0x2CCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDC4u;
label_2ccdc4:
    // 0x2ccdc4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2ccdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2ccdc8: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x2ccdc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ccdcc: 0xc04ca14  jal         func_132850
    ctx->pc = 0x2CCDCCu;
    SET_GPR_U32(ctx, 31, 0x2CCDD4u);
    ctx->pc = 0x2CCDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDCCu;
    // 0x2ccdd0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x2CCDCCu, 0x2CCDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDD4u;
label_2ccdd4:
    // 0x2ccdd4: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ccdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ccdd8: 0x90500034  lbu         $s0, 0x34($v0)
    ctx->pc = 0x2ccdd8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2ccddc: 0xc0a2950  jal         func_28A540
    ctx->pc = 0x2CCDDCu;
    SET_GPR_U32(ctx, 31, 0x2CCDE4u);
    ctx->pc = 0x2CCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDDCu;
    // 0x2ccde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A540u, 0x2CCDDCu, 0x2CCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDE4u;
label_2ccde4:
    // 0x2ccde4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ccde8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ccde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdec: 0xc05d458  jal         func_175160
    ctx->pc = 0x2CCDECu;
    SET_GPR_U32(ctx, 31, 0x2CCDF4u);
    ctx->pc = 0x2CCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDECu;
    // 0x2ccdf0: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175160u, 0x2CCDECu, 0x2CCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDF4u;
label_2ccdf4:
    // 0x2ccdf4: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2ccdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2ccdf8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2ccdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2ccdfc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2ccdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2cce00: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2cce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
    // 0x2cce04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cce04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cce08: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2cce08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cce0c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2cce0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cce10: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCE10u;
    {
        const bool branch_taken_0x2cce10 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2CCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE10u;
        // 0x2cce14: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce10) {
            ctx->pc = 0x2CCE28u;
            goto label_2cce28;
        }
    }
    ctx->pc = 0x2CCE18u;
    // 0x2cce18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cce18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce1c: 0xc052dc0  jal         func_14B700
    ctx->pc = 0x2CCE1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCE24u);
    ctx->pc = 0x2CCE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE1Cu;
    // 0x2cce20: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B700u, 0x2CCE1Cu, 0x2CCE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE24u;
label_2cce24:
    // 0x2cce24: 0x0  nop
    ctx->pc = 0x2cce24u;
    // NOP
label_2cce28:
    // 0x2cce28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cce2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce30: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x2CCE30u;
    SET_GPR_U32(ctx, 31, 0x2CCE38u);
    ctx->pc = 0x2CCE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE30u;
    // 0x2cce34: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326960u, 0x2CCE30u, 0x2CCE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE38u;
label_2cce38:
    // 0x2cce38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cce3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cce3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cce40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cce40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cce44: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE44u;
        // 0x2cce48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCE4Cu;
}
