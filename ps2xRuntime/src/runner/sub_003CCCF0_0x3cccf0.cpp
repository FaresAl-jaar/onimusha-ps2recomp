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

// Function: sub_003CCCF0
// Address: 0x3cccf0 - 0x3ccde4
void sub_003CCCF0_0x3cccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCCF0_0x3cccf0");
#endif

    switch (ctx->pc) {
        case 0x3ccd20u: goto label_3ccd20;
        case 0x3ccd78u: goto label_3ccd78;
        case 0x3ccd8cu: goto label_3ccd8c;
        case 0x3ccd94u: goto label_3ccd94;
        case 0x3ccda0u: goto label_3ccda0;
        case 0x3ccda8u: goto label_3ccda8;
        case 0x3ccdb4u: goto label_3ccdb4;
        case 0x3ccdbcu: goto label_3ccdbc;
        default: break;
    }

    ctx->pc = 0x3cccf0u;

    // 0x3cccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cccf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3cccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3cccf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cccfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ccd00: 0x9083001f  lbu         $v1, 0x1F($a0)
    ctx->pc = 0x3ccd00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x3ccd04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CCD04u;
    {
        const bool branch_taken_0x3ccd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCD04u;
        // 0x3ccd08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd04) {
            ctx->pc = 0x3CCD20u;
            goto label_3ccd20;
        }
    }
    ctx->pc = 0x3CCD0Cu;
    // 0x3ccd0c: 0x26040278  addiu       $a0, $s0, 0x278
    ctx->pc = 0x3ccd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    // 0x3ccd10: 0x260501c4  addiu       $a1, $s0, 0x1C4
    ctx->pc = 0x3ccd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
    // 0x3ccd14: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x3ccd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3ccd18: 0xc049522  jal         func_125488
    ctx->pc = 0x3CCD18u;
    SET_GPR_U32(ctx, 31, 0x3CCD20u);
    ctx->pc = 0x3CCD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD18u;
    // 0x3ccd1c: 0xa2000333  sb          $zero, 0x333($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 819), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3CCD18u, 0x3CCD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD20u;
label_3ccd20:
    // 0x3ccd20: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ccd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ccd24: 0xa202001f  sb          $v0, 0x1F($s0)
    ctx->pc = 0x3ccd24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ccd28: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3ccd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3ccd2c: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x3ccd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ccd30: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3ccd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3ccd34: 0x2463e4a0  addiu       $v1, $v1, -0x1B60
    ctx->pc = 0x3ccd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960288));
    // 0x3ccd38: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x3ccd38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ccd3c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3ccd3cu;
    { uint32_t bits = FAST_READ32(0x65E4A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ccd40: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x3ccd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x3ccd44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ccd44u;
    { uint32_t bits = FAST_READ32(0x65E4A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ccd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ccd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccd4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3ccd4cu;
    { uint32_t bits = FAST_READ32(0x65E4A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccd50: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x3ccd50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3ccd54: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x3ccd54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3ccd58: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3ccd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3ccd5c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3ccd5cu;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ccd60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3ccd60u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ccd64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3ccd64u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ccd68: 0xe602009c  swc1        $f2, 0x9C($s0)
    ctx->pc = 0x3ccd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3ccd6c: 0xe60100a0  swc1        $f1, 0xA0($s0)
    ctx->pc = 0x3ccd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x3ccd70: 0xc0f32d8  jal         func_3CCB60
    ctx->pc = 0x3CCD70u;
    SET_GPR_U32(ctx, 31, 0x3CCD78u);
    ctx->pc = 0x3CCD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD70u;
    // 0x3ccd74: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCB60u, 0x3CCD70u, 0x3CCD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD78u;
label_3ccd78:
    // 0x3ccd78: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3ccd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ccd7c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3ccd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ccd80: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3ccd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ccd84: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3CCD84u;
    SET_GPR_U32(ctx, 31, 0x3CCD8Cu);
    ctx->pc = 0x3CCD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD84u;
    // 0x3ccd88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3CCD84u, 0x3CCD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD8Cu;
label_3ccd8c:
    // 0x3ccd8c: 0xc0f331c  jal         func_3CCC70
    ctx->pc = 0x3CCD8Cu;
    SET_GPR_U32(ctx, 31, 0x3CCD94u);
    ctx->pc = 0x3CCD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD8Cu;
    // 0x3ccd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCC70u, 0x3CCD8Cu, 0x3CCD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCD94u;
label_3ccd94:
    // 0x3ccd94: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x3ccd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x3ccd98: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3CCD98u;
    SET_GPR_U32(ctx, 31, 0x3CCDA0u);
    ctx->pc = 0x3CCD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCD98u;
    // 0x3ccd9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3CCD98u, 0x3CCDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCDA0u;
label_3ccda0:
    // 0x3ccda0: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3CCDA0u;
    SET_GPR_U32(ctx, 31, 0x3CCDA8u);
    ctx->pc = 0x3CCDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCDA0u;
    // 0x3ccda4: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3CCDA0u, 0x3CCDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCDA8u;
label_3ccda8:
    // 0x3ccda8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3ccda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3ccdac: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3CCDACu;
    SET_GPR_U32(ctx, 31, 0x3CCDB4u);
    ctx->pc = 0x3CCDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCDACu;
    // 0x3ccdb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3CCDACu, 0x3CCDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCDB4u;
label_3ccdb4:
    // 0x3ccdb4: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3CCDB4u;
    SET_GPR_U32(ctx, 31, 0x3CCDBCu);
    ctx->pc = 0x3CCDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCDB4u;
    // 0x3ccdb8: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3CCDB4u, 0x3CCDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCDBCu;
label_3ccdbc:
    // 0x3ccdbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ccdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ccdc0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3ccdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3ccdc4: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3ccdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3ccdc8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3ccdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ccdcc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ccdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ccdd0: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3ccdd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3ccdd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ccdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ccdd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ccdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccddc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCDDCu;
        // 0x3ccde0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCDE4u;
}
