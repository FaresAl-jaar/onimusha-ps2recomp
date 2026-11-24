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

// Function: sub_002EBFC0
// Address: 0x2ebfc0 - 0x2ec1d4
void sub_002EBFC0_0x2ebfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBFC0_0x2ebfc0");
#endif

    switch (ctx->pc) {
        case 0x2ec084u: goto label_2ec084;
        case 0x2ec0acu: goto label_2ec0ac;
        case 0x2ec0c0u: goto label_2ec0c0;
        case 0x2ec0d4u: goto label_2ec0d4;
        case 0x2ec0e8u: goto label_2ec0e8;
        case 0x2ec178u: goto label_2ec178;
        default: break;
    }

    ctx->pc = 0x2ebfc0u;

    // 0x2ebfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ebfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ebfc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ebfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ebfc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ebfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ebfcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ebfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ebfd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ebfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ebfd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ebfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ebfd8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2ebfd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ebfdc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBFDCu;
    {
        const bool branch_taken_0x2ebfdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFDCu;
        // 0x2ebfe0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfdc) {
            ctx->pc = 0x2EBFF0u;
            goto label_2ebff0;
        }
    }
    ctx->pc = 0x2EBFE4u;
    // 0x2ebfe4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2EBFE4u;
    {
        const bool branch_taken_0x2ebfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebfe4) {
            ctx->pc = 0x2EC090u;
            goto label_2ec090;
        }
    }
    ctx->pc = 0x2EBFECu;
    // 0x2ebfec: 0x0  nop
    ctx->pc = 0x2ebfecu;
    // NOP
label_2ebff0:
    // 0x2ebff0: 0x92680236  lbu         $t0, 0x236($s3)
    ctx->pc = 0x2ebff0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 566)));
    // 0x2ebff4: 0x96650274  lhu         $a1, 0x274($s3)
    ctx->pc = 0x2ebff4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 628)));
    // 0x2ebff8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ebff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ebffc: 0x8e640238  lw          $a0, 0x238($s3)
    ctx->pc = 0x2ebffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2ec000: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x2ec000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x2ec004: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x2ec004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x2ec008: 0x24c67420  addiu       $a2, $a2, 0x7420
    ctx->pc = 0x2ec008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29728));
    // 0x2ec00c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ec00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec010: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2ec010u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2ec014: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2ec014u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2ec018: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2ec018u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ec01c: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x2ec01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2ec020: 0xc59021  addu        $s2, $a2, $a1
    ctx->pc = 0x2ec020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ec024: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EC024u;
    {
        const bool branch_taken_0x2ec024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC024u;
        // 0x2ec028: 0x26510064  addiu       $s1, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec024) {
            ctx->pc = 0x2EC068u;
            goto label_2ec068;
        }
    }
    ctx->pc = 0x2EC02Cu;
    // 0x2ec02c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ec02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ec030: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2ec030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2ec034: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ec034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ec038: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC038u;
    {
        const bool branch_taken_0x2ec038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec038) {
            ctx->pc = 0x2EC068u;
            goto label_2ec068;
        }
    }
    ctx->pc = 0x2EC040u;
    // 0x2ec040: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ec040u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec044: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2ec044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x2ec048: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ec048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ec04c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec04cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec054: 0x0  nop
    ctx->pc = 0x2ec054u;
    // NOP
    // 0x2ec058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec05c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec05cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec060: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ec060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ec064: 0x0  nop
    ctx->pc = 0x2ec064u;
    // NOP
label_2ec068:
    // 0x2ec068: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC068u;
    {
        const bool branch_taken_0x2ec068 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x2ec068) {
            ctx->pc = 0x2EC078u;
            goto label_2ec078;
        }
    }
    ctx->pc = 0x2EC070u;
    // 0x2ec070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec074: 0x0  nop
    ctx->pc = 0x2ec074u;
    // NOP
label_2ec078:
    // 0x2ec078: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec07c: 0xc0bb078  jal         func_2EC1E0
    ctx->pc = 0x2EC07Cu;
    SET_GPR_U32(ctx, 31, 0x2EC084u);
    ctx->pc = 0x2EC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC07Cu;
    // 0x2ec080: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1E0u, 0x2EC07Cu, 0x2EC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC084u;
label_2ec084:
    // 0x2ec084: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC084u;
    {
        const bool branch_taken_0x2ec084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC084u;
        // 0x2ec088: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec084) {
            ctx->pc = 0x2EC098u;
            goto label_2ec098;
        }
    }
    ctx->pc = 0x2EC08Cu;
    // 0x2ec08c: 0x0  nop
    ctx->pc = 0x2ec08cu;
    // NOP
label_2ec090:
    // 0x2ec090: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2EC090u;
    {
        const bool branch_taken_0x2ec090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC090u;
        // 0x2ec094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec090) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC098u;
label_2ec098:
    // 0x2ec098: 0xa262028d  sb          $v0, 0x28D($s3)
    ctx->pc = 0x2ec098u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 653), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec09c: 0x8e64023c  lw          $a0, 0x23C($s3)
    ctx->pc = 0x2ec09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x2ec0a0: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x2ec0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x2ec0a4: 0xc0bb078  jal         func_2EC1E0
    ctx->pc = 0x2EC0A4u;
    SET_GPR_U32(ctx, 31, 0x2EC0ACu);
    ctx->pc = 0x2EC0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0A4u;
    // 0x2ec0a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1E0u, 0x2EC0A4u, 0x2EC0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0ACu;
label_2ec0ac:
    // 0x2ec0ac: 0xa262028e  sb          $v0, 0x28E($s3)
    ctx->pc = 0x2ec0acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 654), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec0b0: 0x26450032  addiu       $a1, $s2, 0x32
    ctx->pc = 0x2ec0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
    // 0x2ec0b4: 0x8e640244  lw          $a0, 0x244($s3)
    ctx->pc = 0x2ec0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x2ec0b8: 0xc0bb078  jal         func_2EC1E0
    ctx->pc = 0x2EC0B8u;
    SET_GPR_U32(ctx, 31, 0x2EC0C0u);
    ctx->pc = 0x2EC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0B8u;
    // 0x2ec0bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1E0u, 0x2EC0B8u, 0x2EC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0C0u;
label_2ec0c0:
    // 0x2ec0c0: 0xa262028f  sb          $v0, 0x28F($s3)
    ctx->pc = 0x2ec0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 655), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec0c4: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x2ec0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x2ec0c8: 0x8e64024c  lw          $a0, 0x24C($s3)
    ctx->pc = 0x2ec0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x2ec0cc: 0xc0bb078  jal         func_2EC1E0
    ctx->pc = 0x2EC0CCu;
    SET_GPR_U32(ctx, 31, 0x2EC0D4u);
    ctx->pc = 0x2EC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0CCu;
    // 0x2ec0d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC1E0u, 0x2EC0CCu, 0x2EC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0D4u;
label_2ec0d4:
    // 0x2ec0d4: 0xa2620290  sb          $v0, 0x290($s3)
    ctx->pc = 0x2ec0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 656), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec0d8: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x2ec0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2ec0dc: 0x8e640254  lw          $a0, 0x254($s3)
    ctx->pc = 0x2ec0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
    // 0x2ec0e0: 0xc0bb098  jal         func_2EC260
    ctx->pc = 0x2EC0E0u;
    SET_GPR_U32(ctx, 31, 0x2EC0E8u);
    ctx->pc = 0x2EC0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0E0u;
    // 0x2ec0e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC260u, 0x2EC0E0u, 0x2EC0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0E8u;
label_2ec0e8:
    // 0x2ec0e8: 0xa2620291  sb          $v0, 0x291($s3)
    ctx->pc = 0x2ec0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 657), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec0ec: 0xa2600292  sb          $zero, 0x292($s3)
    ctx->pc = 0x2ec0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 658), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec0f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0f4: 0x9267028d  lbu         $a3, 0x28D($s3)
    ctx->pc = 0x2ec0f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 653)));
    // 0x2ec0f8: 0x9266028e  lbu         $a2, 0x28E($s3)
    ctx->pc = 0x2ec0f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 654)));
    // 0x2ec0fc: 0x9265028f  lbu         $a1, 0x28F($s3)
    ctx->pc = 0x2ec0fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 655)));
    // 0x2ec100: 0x92640290  lbu         $a0, 0x290($s3)
    ctx->pc = 0x2ec100u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 656)));
    // 0x2ec104: 0x92630291  lbu         $v1, 0x291($s3)
    ctx->pc = 0x2ec104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 657)));
    // 0x2ec108: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2ec108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ec10c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ec10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ec110: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ec110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ec114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec118: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC118u;
    {
        const bool branch_taken_0x2ec118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC118u;
        // 0x2ec11c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec118) {
            ctx->pc = 0x2EC168u;
            goto label_2ec168;
        }
    }
    ctx->pc = 0x2EC120u;
    // 0x2ec120: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ec120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ec124: 0x28420032  slti        $v0, $v0, 0x32
    ctx->pc = 0x2ec124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2ec128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC128u;
    {
        const bool branch_taken_0x2ec128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec128) {
            ctx->pc = 0x2EC138u;
            goto label_2ec138;
        }
    }
    ctx->pc = 0x2EC130u;
    // 0x2ec130: 0x64030031  daddiu      $v1, $zero, 0x31
    ctx->pc = 0x2ec130u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)49);
    // 0x2ec134: 0x0  nop
    ctx->pc = 0x2ec134u;
    // NOP
label_2ec138:
    // 0x2ec138: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2ec138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2ec13c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ec13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ec140: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2ec140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2ec144: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2ec144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ec148: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2ec148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2ec14c: 0x0  nop
    ctx->pc = 0x2ec14cu;
    // NOP
    // 0x2ec150: 0x1010  mfhi        $v0
    ctx->pc = 0x2ec150u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ec154: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ec154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ec158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec15c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ec15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ec160: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EC160u;
    {
        const bool branch_taken_0x2ec160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC160u;
        // 0x2ec164: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec160) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC168u;
label_2ec168:
    // 0x2ec168: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ec168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ec16c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ec16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ec170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec174: 0x0  nop
    ctx->pc = 0x2ec174u;
    // NOP
label_2ec178:
    // 0x2ec178: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2ec178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ec17c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2ec17cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec180: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC180u;
    {
        const bool branch_taken_0x2ec180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC180u;
        // 0x2ec184: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec180) {
            ctx->pc = 0x2EC1A0u;
            goto label_2ec1a0;
        }
    }
    ctx->pc = 0x2EC188u;
    // 0x2ec188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ec188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ec18c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ec190: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2ec190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ec194: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EC194u;
    {
        const bool branch_taken_0x2ec194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC194u;
        // 0x2ec198: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec194) {
            ctx->pc = 0x2EC178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec178;
        }
    }
    ctx->pc = 0x2EC19Cu;
    // 0x2ec19c: 0x0  nop
    ctx->pc = 0x2ec19cu;
    // NOP
label_2ec1a0:
    // 0x2ec1a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ec1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec1a4: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x2ec1a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ec1a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC1A8u;
    {
        const bool branch_taken_0x2ec1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec1a8) {
            ctx->pc = 0x2EC1B8u;
            goto label_2ec1b8;
        }
    }
    ctx->pc = 0x2EC1B0u;
    // 0x2ec1b0: 0x64020004  daddiu      $v0, $zero, 0x4
    ctx->pc = 0x2ec1b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2ec1b4: 0x0  nop
    ctx->pc = 0x2ec1b4u;
    // NOP
label_2ec1b8:
    // 0x2ec1b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ec1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec1bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ec1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec1c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ec1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec1c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ec1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec1c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1CCu;
        // 0x2ec1d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC1D4u;
}
