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

// Function: sub_003C5040
// Address: 0x3c5040 - 0x3c56e4
void sub_003C5040_0x3c5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5040_0x3c5040");
#endif

    switch (ctx->pc) {
        case 0x3c5060u: goto label_3c5060;
        case 0x3c5078u: goto label_3c5078;
        case 0x3c5190u: goto label_3c5190;
        case 0x3c51a4u: goto label_3c51a4;
        case 0x3c51d8u: goto label_3c51d8;
        case 0x3c51f0u: goto label_3c51f0;
        case 0x3c5270u: goto label_3c5270;
        case 0x3c5298u: goto label_3c5298;
        case 0x3c52d8u: goto label_3c52d8;
        case 0x3c5314u: goto label_3c5314;
        case 0x3c5354u: goto label_3c5354;
        case 0x3c5394u: goto label_3c5394;
        case 0x3c53d4u: goto label_3c53d4;
        case 0x3c53f8u: goto label_3c53f8;
        case 0x3c543cu: goto label_3c543c;
        case 0x3c5474u: goto label_3c5474;
        case 0x3c54bcu: goto label_3c54bc;
        case 0x3c54f4u: goto label_3c54f4;
        case 0x3c553cu: goto label_3c553c;
        case 0x3c5574u: goto label_3c5574;
        case 0x3c55bcu: goto label_3c55bc;
        case 0x3c55f4u: goto label_3c55f4;
        case 0x3c563cu: goto label_3c563c;
        case 0x3c5674u: goto label_3c5674;
        default: break;
    }

    ctx->pc = 0x3c5040u;

    // 0x3c5040: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3c5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x3c5044: 0x24040a40  addiu       $a0, $zero, 0xA40
    ctx->pc = 0x3c5044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x3c5048: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c5048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c504c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c5050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c5050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c5054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c5054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c5058: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3C5058u;
    SET_GPR_U32(ctx, 31, 0x3C5060u);
    ctx->pc = 0x3C505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5058u;
    // 0x3c505c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3C5058u, 0x3C5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5060u;
label_3c5060:
    // 0x3c5060: 0xaf828cac  sw          $v0, -0x7354($gp)
    ctx->pc = 0x3c5060u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937772), GPR_U32(ctx, 2));
    // 0x3c5064: 0x8f848cac  lw          $a0, -0x7354($gp)
    ctx->pc = 0x3c5064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5068: 0x10800197  beqz        $a0, . + 4 + (0x197 << 2)
    ctx->pc = 0x3C5068u;
    {
        const bool branch_taken_0x3c5068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5068u;
        // 0x3c506c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5068) {
            ctx->pc = 0x3C56C8u;
            goto label_3c56c8;
        }
    }
    ctx->pc = 0x3C5070u;
    // 0x3c5070: 0xc049590  jal         func_125640
    ctx->pc = 0x3C5070u;
    SET_GPR_U32(ctx, 31, 0x3C5078u);
    ctx->pc = 0x3C5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5070u;
    // 0x3c5074: 0x24060a40  addiu       $a2, $zero, 0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C5070u, 0x3C5078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5078u;
label_3c5078:
    // 0x3c5078: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3c5078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c507c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3c507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3c5080: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c5080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c5084: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c5084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c5088: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3c5088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3c508c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c5090: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3c5090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3c5094: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c5094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c5098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c509c: 0x0  nop
    ctx->pc = 0x3c509cu;
    // NOP
    // 0x3c50a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c50a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c50a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c50a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c50a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C50A8u;
    {
        const bool branch_taken_0x3c50a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c50a8) {
            ctx->pc = 0x3C50C0u;
            goto label_3c50c0;
        }
    }
    ctx->pc = 0x3C50B0u;
    // 0x3c50b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c50b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c50b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c50b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c50b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C50B8u;
    {
        const bool branch_taken_0x3c50b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50B8u;
        // 0x3c50bc: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c50b8) {
            ctx->pc = 0x3C50DCu;
            goto label_3c50dc;
        }
    }
    ctx->pc = 0x3C50C0u;
label_3c50c0:
    // 0x3c50c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c50c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c50c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c50c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c50c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c50cc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c50ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c50d0: 0x0  nop
    ctx->pc = 0x3c50d0u;
    // NOP
    // 0x3c50d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c50d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c50d8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x3c50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_3c50dc:
    // 0x3c50dc: 0xa7a30190  sh          $v1, 0x190($sp)
    ctx->pc = 0x3c50dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c50e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c50e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c50e4: 0x0  nop
    ctx->pc = 0x3c50e4u;
    // NOP
    // 0x3c50e8: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3c50e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c50ec: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c50f0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3c50f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3c50f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c50f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c50f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c50fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c50fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c5100: 0x0  nop
    ctx->pc = 0x3c5100u;
    // NOP
    // 0x3c5104: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c5104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c5108: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c5108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c510c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C510Cu;
    {
        const bool branch_taken_0x3c510c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c510c) {
            ctx->pc = 0x3C5124u;
            goto label_3c5124;
        }
    }
    ctx->pc = 0x3C5114u;
    // 0x3c5114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c5118: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c5118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c511c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C511Cu;
    {
        const bool branch_taken_0x3c511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C511Cu;
        // 0x3c5120: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c511c) {
            ctx->pc = 0x3C5140u;
            goto label_3c5140;
        }
    }
    ctx->pc = 0x3C5124u;
label_3c5124:
    // 0x3c5124: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c5124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c5128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c5128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c512c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c512cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c5130: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3c5130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c5134: 0x0  nop
    ctx->pc = 0x3c5134u;
    // NOP
    // 0x3c5138: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c5138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c513c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3c513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3c5140:
    // 0x3c5140: 0xa7a30192  sh          $v1, 0x192($sp)
    ctx->pc = 0x3c5140u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 402), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c5144: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x3c5144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x3c5148: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c5148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3c514c: 0x3c023cfb  lui         $v0, 0x3CFB
    ctx->pc = 0x3c514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15611 << 16));
    // 0x3c5150: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x3c5150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
    // 0x3c5154: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3c5154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3c5158: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x3c5158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x3c515c: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x3c515cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x3c5160: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3c5160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3c5164: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x3c5164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x3c5168: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x3c5168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x3c516c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3c516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3c5170: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c5170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5174: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x3c5174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x3c5178: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c5178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c517c: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3c517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3c5180: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3c5180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3c5184: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x3c5184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x3c5188: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3c5188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3c518c: 0xa7a201b0  sh          $v0, 0x1B0($sp)
    ctx->pc = 0x3c518cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 432), (uint16_t)GPR_U32(ctx, 2));
label_3c5190:
    // 0x3c5190: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5194: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3c5194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3c5198: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c5198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c519c: 0xc0f0570  jal         func_3C15C0
    ctx->pc = 0x3C519Cu;
    SET_GPR_U32(ctx, 31, 0x3C51A4u);
    ctx->pc = 0x3C51A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C519Cu;
    // 0x3c51a0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C15C0u, 0x3C519Cu, 0x3C51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C51A4u;
label_3c51a4:
    // 0x3c51a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c51a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c51a8: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x3c51a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3c51ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3C51ACu;
    {
        const bool branch_taken_0x3c51ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51ACu;
        // 0x3c51b0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51ac) {
            ctx->pc = 0x3C5190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5190;
        }
    }
    ctx->pc = 0x3C51B4u;
    // 0x3c51b4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3c51b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3c51b8: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c51bc: 0x8c23b870  lw          $v1, -0x4790($at)
    ctx->pc = 0x3c51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80B870u));
    // 0x3c51c0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3c51c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c51c4: 0xac4305dc  sw          $v1, 0x5DC($v0)
    ctx->pc = 0x3c51c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1500), GPR_U32(ctx, 3));
    // 0x3c51c8: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c51cc: 0x8c4405dc  lw          $a0, 0x5DC($v0)
    ctx->pc = 0x3c51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
    // 0x3c51d0: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3C51D0u;
    SET_GPR_U32(ctx, 31, 0x3C51D8u);
    ctx->pc = 0x3C51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C51D0u;
    // 0x3c51d4: 0x244505e0  addiu       $a1, $v0, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3C51D0u, 0x3C51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C51D8u;
label_3c51d8:
    // 0x3c51d8: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c51dc: 0x8c6405dc  lw          $a0, 0x5DC($v1)
    ctx->pc = 0x3c51dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
    // 0x3c51e0: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x3c51e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x3c51e4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c51e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c51e8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x3C51E8u;
    {
        const bool branch_taken_0x3c51e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51E8u;
        // 0x3c51ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51e8) {
            ctx->pc = 0x3C5290u;
            goto label_3c5290;
        }
    }
    ctx->pc = 0x3C51F0u;
label_3c51f0:
    // 0x3c51f0: 0x26037fff  addiu       $v1, $s0, 0x7FFF
    ctx->pc = 0x3c51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x3c51f4: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x3c51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c51f8: 0x34038026  ori         $v1, $zero, 0x8026
    ctx->pc = 0x3c51f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32806);
    // 0x3c51fc: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C51FCu;
    {
        const bool branch_taken_0x3c51fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51FCu;
        // 0x3c5200: 0x34038025  ori         $v1, $zero, 0x8025 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32805);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51fc) {
            ctx->pc = 0x3C5258u;
            goto label_3c5258;
        }
    }
    ctx->pc = 0x3C5204u;
    // 0x3c5204: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5204u;
    {
        const bool branch_taken_0x3c5204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c5204) {
            ctx->pc = 0x3C5250u;
            goto label_3c5250;
        }
    }
    ctx->pc = 0x3C520Cu;
    // 0x3c520c: 0x34038024  ori         $v1, $zero, 0x8024
    ctx->pc = 0x3c520cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32804);
    // 0x3c5210: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3C5210u;
    {
        const bool branch_taken_0x3c5210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5210u;
        // 0x3c5214: 0x34038022  ori         $v1, $zero, 0x8022 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5210) {
            ctx->pc = 0x3C5248u;
            goto label_3c5248;
        }
    }
    ctx->pc = 0x3C5218u;
    // 0x3c5218: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5218u;
    {
        const bool branch_taken_0x3c5218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c5218) {
            ctx->pc = 0x3C5240u;
            goto label_3c5240;
        }
    }
    ctx->pc = 0x3C5220u;
    // 0x3c5220: 0x34038021  ori         $v1, $zero, 0x8021
    ctx->pc = 0x3c5220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
    // 0x3c5224: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5224u;
    {
        const bool branch_taken_0x3c5224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c5224) {
            ctx->pc = 0x3C5238u;
            goto label_3c5238;
        }
    }
    ctx->pc = 0x3C522Cu;
    // 0x3c522c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C522Cu;
    {
        const bool branch_taken_0x3c522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c522c) {
            ctx->pc = 0x3C5270u;
            goto label_3c5270;
        }
    }
    ctx->pc = 0x3C5234u;
    // 0x3c5234: 0x0  nop
    ctx->pc = 0x3c5234u;
    // NOP
label_3c5238:
    // 0x3c5238: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5238u;
    {
        const bool branch_taken_0x3c5238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5238u;
        // 0x3c523c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5238) {
            ctx->pc = 0x3C5260u;
            goto label_3c5260;
        }
    }
    ctx->pc = 0x3C5240u;
label_3c5240:
    // 0x3c5240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5240u;
    {
        const bool branch_taken_0x3c5240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5240u;
        // 0x3c5244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5240) {
            ctx->pc = 0x3C5260u;
            goto label_3c5260;
        }
    }
    ctx->pc = 0x3C5248u;
label_3c5248:
    // 0x3c5248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5248u;
    {
        const bool branch_taken_0x3c5248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5248u;
        // 0x3c524c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5248) {
            ctx->pc = 0x3C5260u;
            goto label_3c5260;
        }
    }
    ctx->pc = 0x3C5250u;
label_3c5250:
    // 0x3c5250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5250u;
    {
        const bool branch_taken_0x3c5250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5250u;
        // 0x3c5254: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5250) {
            ctx->pc = 0x3C5260u;
            goto label_3c5260;
        }
    }
    ctx->pc = 0x3C5258u;
label_3c5258:
    // 0x3c5258: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c525c: 0x0  nop
    ctx->pc = 0x3c525cu;
    // NOP
label_3c5260:
    // 0x3c5260: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3c5260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c5264: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3c5264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3c5268: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3C5268u;
    SET_GPR_U32(ctx, 31, 0x3C5270u);
    ctx->pc = 0x3C526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5268u;
    // 0x3c526c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3C5268u, 0x3C5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5270u;
label_3c5270:
    // 0x3c5270: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c5270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5274: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c5274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c5278: 0x8c6405dc  lw          $a0, 0x5DC($v1)
    ctx->pc = 0x3c5278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
    // 0x3c527c: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x3c527cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x3c5280: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3c5280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c5284: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3C5284u;
    {
        const bool branch_taken_0x3c5284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5284) {
            ctx->pc = 0x3C51F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c51f0;
        }
    }
    ctx->pc = 0x3C528Cu;
    // 0x3c528c: 0x0  nop
    ctx->pc = 0x3c528cu;
    // NOP
label_3c5290:
    // 0x3c5290: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c5290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c5294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5298:
    // 0x3c5298: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x3c5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c529c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c52a0: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3C52A0u;
    {
        const bool branch_taken_0x3c52a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52A0u;
        // 0x3c52a4: 0x24720010  addiu       $s2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c52a0) {
            ctx->pc = 0x3C52D8u;
            goto label_3c52d8;
        }
    }
    ctx->pc = 0x3C52A8u;
    // 0x3c52a8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c52ac: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x3c52acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3c52b0: 0x2442e230  addiu       $v0, $v0, -0x1DD0
    ctx->pc = 0x3c52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959664));
    // 0x3c52b4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3c52b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3c52b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c52b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E230u));
    // 0x3c52bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c52c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c52c4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3c52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3c52c8: 0x2442e220  addiu       $v0, $v0, -0x1DE0
    ctx->pc = 0x3c52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959648));
    // 0x3c52cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c52ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E220u));
    // 0x3c52d0: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3C52D0u;
    SET_GPR_U32(ctx, 31, 0x3C52D8u);
    ctx->pc = 0x3C52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C52D0u;
    // 0x3c52d4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3C52D0u, 0x3C52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C52D8u;
label_3c52d8:
    // 0x3c52d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c52d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c52dc: 0x1623000e  bne         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C52DCu;
    {
        const bool branch_taken_0x3c52dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c52dc) {
            ctx->pc = 0x3C5318u;
            goto label_3c5318;
        }
    }
    ctx->pc = 0x3C52E4u;
    // 0x3c52e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c52e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c52e8: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x3c52e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3c52ec: 0x2442e250  addiu       $v0, $v0, -0x1DB0
    ctx->pc = 0x3c52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x3c52f0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x3c52f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3c52f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c52f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E250u));
    // 0x3c52f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c52f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c52fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5300: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3c5300u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3c5304: 0x2442e240  addiu       $v0, $v0, -0x1DC0
    ctx->pc = 0x3c5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959680));
    // 0x3c5308: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c5308u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E240u));
    // 0x3c530c: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3C530Cu;
    SET_GPR_U32(ctx, 31, 0x3C5314u);
    ctx->pc = 0x3C5310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C530Cu;
    // 0x3c5310: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3C530Cu, 0x3C5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5314u;
label_3c5314:
    // 0x3c5314: 0x0  nop
    ctx->pc = 0x3c5314u;
    // NOP
label_3c5318:
    // 0x3c5318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c5318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c531c: 0x1623000e  bne         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C531Cu;
    {
        const bool branch_taken_0x3c531c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c531c) {
            ctx->pc = 0x3C5358u;
            goto label_3c5358;
        }
    }
    ctx->pc = 0x3C5324u;
    // 0x3c5324: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c5324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5328: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x3c5328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3c532c: 0x2442e270  addiu       $v0, $v0, -0x1D90
    ctx->pc = 0x3c532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959728));
    // 0x3c5330: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3c5330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3c5334: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c5334u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E270u));
    // 0x3c5338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c5338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c533c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5340: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3c5340u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3c5344: 0x2442e260  addiu       $v0, $v0, -0x1DA0
    ctx->pc = 0x3c5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959712));
    // 0x3c5348: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c5348u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E260u));
    // 0x3c534c: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3C534Cu;
    SET_GPR_U32(ctx, 31, 0x3C5354u);
    ctx->pc = 0x3C5350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C534Cu;
    // 0x3c5350: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3C534Cu, 0x3C5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5354u;
label_3c5354:
    // 0x3c5354: 0x0  nop
    ctx->pc = 0x3c5354u;
    // NOP
label_3c5358:
    // 0x3c5358: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c5358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c535c: 0x1623000e  bne         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C535Cu;
    {
        const bool branch_taken_0x3c535c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c535c) {
            ctx->pc = 0x3C5398u;
            goto label_3c5398;
        }
    }
    ctx->pc = 0x3C5364u;
    // 0x3c5364: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c5364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5368: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x3c5368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3c536c: 0x2442e290  addiu       $v0, $v0, -0x1D70
    ctx->pc = 0x3c536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959760));
    // 0x3c5370: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3c5370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3c5374: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c5374u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E290u));
    // 0x3c5378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c5378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c537c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c537cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5380: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3c5380u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3c5384: 0x2442e280  addiu       $v0, $v0, -0x1D80
    ctx->pc = 0x3c5384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959744));
    // 0x3c5388: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c5388u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E280u));
    // 0x3c538c: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3C538Cu;
    SET_GPR_U32(ctx, 31, 0x3C5394u);
    ctx->pc = 0x3C5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C538Cu;
    // 0x3c5390: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3C538Cu, 0x3C5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5394u;
label_3c5394:
    // 0x3c5394: 0x0  nop
    ctx->pc = 0x3c5394u;
    // NOP
label_3c5398:
    // 0x3c5398: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c5398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c539c: 0x1623000e  bne         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C539Cu;
    {
        const bool branch_taken_0x3c539c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c539c) {
            ctx->pc = 0x3C53D8u;
            goto label_3c53d8;
        }
    }
    ctx->pc = 0x3C53A4u;
    // 0x3c53a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c53a8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3c53a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3c53ac: 0x2442e2b0  addiu       $v0, $v0, -0x1D50
    ctx->pc = 0x3c53acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959792));
    // 0x3c53b0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3c53b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3c53b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c53b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E2B0u));
    // 0x3c53b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c53b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c53bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c53c0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3c53c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3c53c4: 0x2442e2a0  addiu       $v0, $v0, -0x1D60
    ctx->pc = 0x3c53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959776));
    // 0x3c53c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c53c8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E2A0u));
    // 0x3c53cc: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3C53CCu;
    SET_GPR_U32(ctx, 31, 0x3C53D4u);
    ctx->pc = 0x3C53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C53CCu;
    // 0x3c53d0: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3C53CCu, 0x3C53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C53D4u;
label_3c53d4:
    // 0x3c53d4: 0x0  nop
    ctx->pc = 0x3c53d4u;
    // NOP
label_3c53d8:
    // 0x3c53d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c53d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c53dc: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x3c53dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3c53e0: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3C53E0u;
    {
        const bool branch_taken_0x3c53e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C53E0u;
        // 0x3c53e4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c53e0) {
            ctx->pc = 0x3C5298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5298;
        }
    }
    ctx->pc = 0x3C53E8u;
    // 0x3c53e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c53e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c53ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c53ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c53f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c53f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c53f4: 0x0  nop
    ctx->pc = 0x3c53f4u;
    // NOP
label_3c53f8:
    // 0x3c53f8: 0x8f848cac  lw          $a0, -0x7354($gp)
    ctx->pc = 0x3c53f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c53fc: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x3c53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3c5400: 0x1660001d  bnez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x3C5400u;
    {
        const bool branch_taken_0x3c5400 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5400u;
        // 0x3c5404: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5400) {
            ctx->pc = 0x3C5478u;
            goto label_3c5478;
        }
    }
    ctx->pc = 0x3C5408u;
    // 0x3c5408: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3c5408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3c540c: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x3c540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3c5410: 0x2463e2c0  addiu       $v1, $v1, -0x1D40
    ctx->pc = 0x3c5410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959808));
    // 0x3c5414: 0x24470510  addiu       $a3, $v0, 0x510
    ctx->pc = 0x3c5414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x3c5418: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3c5418u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E2C0u));
    // 0x3c541c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3c541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3c5420: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c5420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c5424: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3c5424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3c5428: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c5428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c542c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c5430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5434: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3C5434u;
    SET_GPR_U32(ctx, 31, 0x3C543Cu);
    ctx->pc = 0x3C5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5434u;
    // 0x3c5438: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3C5434u, 0x3C543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C543Cu;
label_3c543c:
    // 0x3c543c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5440: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3c5440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3c5444: 0x2442e2d0  addiu       $v0, $v0, -0x1D30
    ctx->pc = 0x3c5444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959824));
    // 0x3c5448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c544c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c544cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E2D0u));
    // 0x3c5450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c5450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5454: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3c5454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3c5458: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c5458u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c545c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3c545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3c5460: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c5460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c5464: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c5464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5468: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c546c: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C546Cu;
    SET_GPR_U32(ctx, 31, 0x3C5474u);
    ctx->pc = 0x3C5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C546Cu;
    // 0x3c5470: 0x24470524  addiu       $a3, $v0, 0x524 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C546Cu, 0x3C5474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5474u;
label_3c5474:
    // 0x3c5474: 0x0  nop
    ctx->pc = 0x3c5474u;
    // NOP
label_3c5478:
    // 0x3c5478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c5478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c547c: 0x1663001e  bne         $s3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C547Cu;
    {
        const bool branch_taken_0x3c547c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c547c) {
            ctx->pc = 0x3C54F8u;
            goto label_3c54f8;
        }
    }
    ctx->pc = 0x3C5484u;
    // 0x3c5484: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c5484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5488: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3c5488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3c548c: 0x2442e2e0  addiu       $v0, $v0, -0x1D20
    ctx->pc = 0x3c548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959840));
    // 0x3c5490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5494: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c5494u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E2E0u));
    // 0x3c5498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c5498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c549c: 0x3c023c16  lui         $v0, 0x3C16
    ctx->pc = 0x3c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15382 << 16));
    // 0x3c54a0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c54a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c54a4: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x3c54a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x3c54a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c54a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c54ac: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c54b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c54b4: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3C54B4u;
    SET_GPR_U32(ctx, 31, 0x3C54BCu);
    ctx->pc = 0x3C54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C54B4u;
    // 0x3c54b8: 0x24470510  addiu       $a3, $v0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3C54B4u, 0x3C54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C54BCu;
label_3c54bc:
    // 0x3c54bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c54c0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3c54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c54c4: 0x2442e2f0  addiu       $v0, $v0, -0x1D10
    ctx->pc = 0x3c54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959856));
    // 0x3c54c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c54c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c54cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c54ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E2F0u));
    // 0x3c54d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c54d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c54d4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x3c54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x3c54d8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c54d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c54dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3c54dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3c54e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c54e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c54e4: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c54e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c54ec: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C54ECu;
    SET_GPR_U32(ctx, 31, 0x3C54F4u);
    ctx->pc = 0x3C54F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C54ECu;
    // 0x3c54f0: 0x24470524  addiu       $a3, $v0, 0x524 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C54ECu, 0x3C54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C54F4u;
label_3c54f4:
    // 0x3c54f4: 0x0  nop
    ctx->pc = 0x3c54f4u;
    // NOP
label_3c54f8:
    // 0x3c54f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c54fc: 0x1663001e  bne         $s3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C54FCu;
    {
        const bool branch_taken_0x3c54fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c54fc) {
            ctx->pc = 0x3C5578u;
            goto label_3c5578;
        }
    }
    ctx->pc = 0x3C5504u;
    // 0x3c5504: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c5504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5508: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3c5508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3c550c: 0x2442e300  addiu       $v0, $v0, -0x1D00
    ctx->pc = 0x3c550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
    // 0x3c5510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5514: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c5514u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E300u));
    // 0x3c5518: 0x2406ff9c  addiu       $a2, $zero, -0x64
    ctx->pc = 0x3c5518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x3c551c: 0x3c023b96  lui         $v0, 0x3B96
    ctx->pc = 0x3c551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15254 << 16));
    // 0x3c5520: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c5520u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c5524: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x3c5524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x3c5528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c5528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c552c: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5530: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c5530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c5534: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3C5534u;
    SET_GPR_U32(ctx, 31, 0x3C553Cu);
    ctx->pc = 0x3C5538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5534u;
    // 0x3c5538: 0x24470510  addiu       $a3, $v0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3C5534u, 0x3C553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C553Cu;
label_3c553c:
    // 0x3c553c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5540: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3c5540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3c5544: 0x2442e310  addiu       $v0, $v0, -0x1CF0
    ctx->pc = 0x3c5544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959888));
    // 0x3c5548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c554c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c554cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E310u));
    // 0x3c5550: 0x2406ff9c  addiu       $a2, $zero, -0x64
    ctx->pc = 0x3c5550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x3c5554: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x3c5554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x3c5558: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c5558u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c555c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3c555cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3c5560: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c5560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c5564: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c5564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5568: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c556c: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C556Cu;
    SET_GPR_U32(ctx, 31, 0x3C5574u);
    ctx->pc = 0x3C5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C556Cu;
    // 0x3c5570: 0x24470524  addiu       $a3, $v0, 0x524 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C556Cu, 0x3C5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5574u;
label_3c5574:
    // 0x3c5574: 0x0  nop
    ctx->pc = 0x3c5574u;
    // NOP
label_3c5578:
    // 0x3c5578: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c5578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c557c: 0x1663001e  bne         $s3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C557Cu;
    {
        const bool branch_taken_0x3c557c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c557c) {
            ctx->pc = 0x3C55F8u;
            goto label_3c55f8;
        }
    }
    ctx->pc = 0x3C5584u;
    // 0x3c5584: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c5584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5588: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3c5588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3c558c: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x3c558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x3c5590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5594: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c5594u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E320u));
    // 0x3c5598: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x3c5598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x3c559c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3c559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3c55a0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c55a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c55a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c55a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c55a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c55a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c55ac: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c55acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c55b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c55b4: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3C55B4u;
    SET_GPR_U32(ctx, 31, 0x3C55BCu);
    ctx->pc = 0x3C55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C55B4u;
    // 0x3c55b8: 0x24470510  addiu       $a3, $v0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3C55B4u, 0x3C55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C55BCu;
label_3c55bc:
    // 0x3c55bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c55c0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3c55c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3c55c4: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x3c55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x3c55c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c55c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c55cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c55ccu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E330u));
    // 0x3c55d0: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x3c55d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x3c55d4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3c55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3c55d8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c55d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c55dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3c55dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3c55e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c55e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c55e4: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c55e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c55ec: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C55ECu;
    SET_GPR_U32(ctx, 31, 0x3C55F4u);
    ctx->pc = 0x3C55F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C55ECu;
    // 0x3c55f0: 0x24470524  addiu       $a3, $v0, 0x524 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C55ECu, 0x3C55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C55F4u;
label_3c55f4:
    // 0x3c55f4: 0x0  nop
    ctx->pc = 0x3c55f4u;
    // NOP
label_3c55f8:
    // 0x3c55f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c55fc: 0x1663001e  bne         $s3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C55FCu;
    {
        const bool branch_taken_0x3c55fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c55fc) {
            ctx->pc = 0x3C5678u;
            goto label_3c5678;
        }
    }
    ctx->pc = 0x3C5604u;
    // 0x3c5604: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c5604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5608: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c5608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c560c: 0x2442e340  addiu       $v0, $v0, -0x1CC0
    ctx->pc = 0x3c560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959936));
    // 0x3c5610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5614: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c5614u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E340u));
    // 0x3c5618: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x3c5618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x3c561c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3c561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3c5620: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c5620u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c5624: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c5624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c5628: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c5628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c562c: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5630: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c5630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c5634: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3C5634u;
    SET_GPR_U32(ctx, 31, 0x3C563Cu);
    ctx->pc = 0x3C5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5634u;
    // 0x3c5638: 0x24470510  addiu       $a3, $v0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3C5634u, 0x3C563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C563Cu;
label_3c563c:
    // 0x3c563c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c5640: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c5640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c5644: 0x2442e350  addiu       $v0, $v0, -0x1CB0
    ctx->pc = 0x3c5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959952));
    // 0x3c5648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c564c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c564cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E350u));
    // 0x3c5650: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x3c5650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x3c5654: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3c5654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3c5658: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3c5658u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3c565c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3c565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3c5660: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c5660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c5664: 0x8f828cac  lw          $v0, -0x7354($gp)
    ctx->pc = 0x3c5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c5668: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c5668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c566c: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C566Cu;
    SET_GPR_U32(ctx, 31, 0x3C5674u);
    ctx->pc = 0x3C5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C566Cu;
    // 0x3c5670: 0x24470524  addiu       $a3, $v0, 0x524 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C566Cu, 0x3C5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5674u;
label_3c5674:
    // 0x3c5674: 0x0  nop
    ctx->pc = 0x3c5674u;
    // NOP
label_3c5678:
    // 0x3c5678: 0x8f848cac  lw          $a0, -0x7354($gp)
    ctx->pc = 0x3c5678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c567c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3c567cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3c5680: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3c5680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c5684: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3c5684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3c5688: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x3c5688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3c568c: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x3c568cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3c5690: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3c5690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3c5694: 0xa0800511  sb          $zero, 0x511($a0)
    ctx->pc = 0x3c5694u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1297), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c5698: 0x8f848cac  lw          $a0, -0x7354($gp)
    ctx->pc = 0x3c5698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c569c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3c569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3c56a0: 0xa0860525  sb          $a2, 0x525($a0)
    ctx->pc = 0x3c56a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1317), (uint8_t)GPR_U32(ctx, 6));
    // 0x3c56a4: 0x8f848cac  lw          $a0, -0x7354($gp)
    ctx->pc = 0x3c56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c56a8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3c56a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3c56ac: 0xa4850514  sh          $a1, 0x514($a0)
    ctx->pc = 0x3c56acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1300), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c56b0: 0x8f848cac  lw          $a0, -0x7354($gp)
    ctx->pc = 0x3c56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x3c56b4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x3c56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3c56b8: 0xa4850528  sh          $a1, 0x528($a0)
    ctx->pc = 0x3c56b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c56bc: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x3C56BCu;
    {
        const bool branch_taken_0x3c56bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56BCu;
        // 0x3c56c0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c56bc) {
            ctx->pc = 0x3C53F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c53f8;
        }
    }
    ctx->pc = 0x3C56C4u;
    // 0x3c56c4: 0x0  nop
    ctx->pc = 0x3c56c4u;
    // NOP
label_3c56c8:
    // 0x3c56c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c56c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c56cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c56ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c56d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c56d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c56d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c56d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c56d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c56d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c56dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3C56DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56DCu;
        // 0x3c56e0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C56DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C56E4u;
}
