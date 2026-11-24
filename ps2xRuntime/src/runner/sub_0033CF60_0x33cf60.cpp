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

// Function: sub_0033CF60
// Address: 0x33cf60 - 0x33d094
void sub_0033CF60_0x33cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CF60_0x33cf60");
#endif

    switch (ctx->pc) {
        case 0x33cfbcu: goto label_33cfbc;
        case 0x33cfc8u: goto label_33cfc8;
        case 0x33cfd8u: goto label_33cfd8;
        case 0x33cfe8u: goto label_33cfe8;
        case 0x33d000u: goto label_33d000;
        case 0x33d024u: goto label_33d024;
        default: break;
    }

    ctx->pc = 0x33cf60u;

    // 0x33cf60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x33cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x33cf64: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x33cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x33cf68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33cf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33cf6c: 0x24427520  addiu       $v0, $v0, 0x7520
    ctx->pc = 0x33cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
    // 0x33cf70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33cf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33cf74: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x33cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33cf78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33cf7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33cf7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33cf84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33cf84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33cf8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33cf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33cf90u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657520u));
    // 0x33cf94: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x33cf94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf98: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33cf9c: 0x8c8206ac  lw          $v0, 0x6AC($a0)
    ctx->pc = 0x33cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x33cfa0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x33cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33cfa4: 0xac8206ac  sw          $v0, 0x6AC($a0)
    ctx->pc = 0x33cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 2));
    // 0x33cfa8: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x33cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x33cfac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x33cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33cfb0: 0xac8206b4  sw          $v0, 0x6B4($a0)
    ctx->pc = 0x33cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 2));
    // 0x33cfb4: 0xc04150c  jal         func_105430
    ctx->pc = 0x33CFB4u;
    SET_GPR_U32(ctx, 31, 0x33CFBCu);
    ctx->pc = 0x33CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFB4u;
    // 0x33cfb8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x33CFB4u, 0x33CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFBCu;
label_33cfbc:
    // 0x33cfbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cfc0: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x33CFC0u;
    SET_GPR_U32(ctx, 31, 0x33CFC8u);
    ctx->pc = 0x33CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFC0u;
    // 0x33cfc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x33CFC0u, 0x33CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFC8u;
label_33cfc8:
    // 0x33cfc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33cfcc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33cfccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x33cfd0: 0xc041588  jal         func_105620
    ctx->pc = 0x33CFD0u;
    SET_GPR_U32(ctx, 31, 0x33CFD8u);
    ctx->pc = 0x33CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFD0u;
    // 0x33cfd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x33CFD0u, 0x33CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFD8u;
label_33cfd8:
    // 0x33cfd8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33cfdc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x33cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33cfe0: 0xc041442  jal         func_105108
    ctx->pc = 0x33CFE0u;
    SET_GPR_U32(ctx, 31, 0x33CFE8u);
    ctx->pc = 0x33CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFE0u;
    // 0x33cfe4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x33CFE0u, 0x33CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFE8u;
label_33cfe8:
    // 0x33cfe8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x33cfe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33cfec: 0x26640880  addiu       $a0, $s3, 0x880
    ctx->pc = 0x33cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2176));
    // 0x33cff0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33cff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cff4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x33cff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33cff8: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x33CFF8u;
    SET_GPR_U32(ctx, 31, 0x33D000u);
    ctx->pc = 0x33CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFF8u;
    // 0x33cffc: 0x7e620870  sq          $v0, 0x870($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 2160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x33CFF8u, 0x33D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D000u;
label_33d000:
    // 0x33d000: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x33d000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33d004: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33d008: 0x26640880  addiu       $a0, $s3, 0x880
    ctx->pc = 0x33d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2176));
    // 0x33d00c: 0x26650870  addiu       $a1, $s3, 0x870
    ctx->pc = 0x33d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2160));
    // 0x33d010: 0x7e630890  sq          $v1, 0x890($s3)
    ctx->pc = 0x33d010u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 2192), GPR_VEC(ctx, 3));
    // 0x33d014: 0xae62087c  sw          $v0, 0x87C($s3)
    ctx->pc = 0x33d014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2172), GPR_U32(ctx, 2));
    // 0x33d018: 0xae62088c  sw          $v0, 0x88C($s3)
    ctx->pc = 0x33d018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2188), GPR_U32(ctx, 2));
    // 0x33d01c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x33D01Cu;
    SET_GPR_U32(ctx, 31, 0x33D024u);
    ctx->pc = 0x33D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D01Cu;
    // 0x33d020: 0xae62089c  sw          $v0, 0x89C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 2204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x33D01Cu, 0x33D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D024u;
label_33d024:
    // 0x33d024: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x33d024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x33d028: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x33d028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x33d02c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x33d02cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d030: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x33d030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x33d034: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33d034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d038: 0x0  nop
    ctx->pc = 0x33d038u;
    // NOP
    // 0x33d03c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x33d03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x33d040: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x33d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33d044: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x33d044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x33d048: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x33d048u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x33d04c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d04cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33d050: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33d050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33d054: 0x0  nop
    ctx->pc = 0x33d054u;
    // NOP
    // 0x33d058: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x33d058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x33d05c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x33d05cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x33d060: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x33d060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x33d064: 0xa66508a0  sh          $a1, 0x8A0($s3)
    ctx->pc = 0x33d064u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2208), (uint16_t)GPR_U32(ctx, 5));
    // 0x33d068: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x33d068u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33d06c: 0x7e652b10  sq          $a1, 0x2B10($s3)
    ctx->pc = 0x33d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 11024), GPR_VEC(ctx, 5));
    // 0x33d070: 0xa2640822  sb          $a0, 0x822($s3)
    ctx->pc = 0x33d070u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2082), (uint8_t)GPR_U32(ctx, 4));
    // 0x33d074: 0xa2630780  sb          $v1, 0x780($s3)
    ctx->pc = 0x33d074u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x33d078: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33d078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d07c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33d07cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d08c: 0x3e00008  jr          $ra
    ctx->pc = 0x33D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D08Cu;
        // 0x33d090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D094u;
}
