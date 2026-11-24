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

// Function: sub_002DF3F0
// Address: 0x2df3f0 - 0x2dff5c
void sub_002DF3F0_0x2df3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF3F0_0x2df3f0");
#endif

    switch (ctx->pc) {
        case 0x2df440u: goto label_2df440;
        case 0x2df468u: goto label_2df468;
        case 0x2df658u: goto label_2df658;
        case 0x2df680u: goto label_2df680;
        case 0x2df6acu: goto label_2df6ac;
        case 0x2df738u: goto label_2df738;
        case 0x2df9ecu: goto label_2df9ec;
        case 0x2dfa80u: goto label_2dfa80;
        case 0x2dfb0cu: goto label_2dfb0c;
        case 0x2dfb1cu: goto label_2dfb1c;
        case 0x2dfb2cu: goto label_2dfb2c;
        case 0x2dfb58u: goto label_2dfb58;
        case 0x2dfbf0u: goto label_2dfbf0;
        case 0x2dfc28u: goto label_2dfc28;
        case 0x2dfd18u: goto label_2dfd18;
        case 0x2dfda0u: goto label_2dfda0;
        case 0x2dfde4u: goto label_2dfde4;
        case 0x2dfe28u: goto label_2dfe28;
        case 0x2dfeb8u: goto label_2dfeb8;
        case 0x2dff28u: goto label_2dff28;
        default: break;
    }

    ctx->pc = 0x2df3f0u;

    // 0x2df3f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2df3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2df3f4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2df3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2df3f8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2df3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2df3fc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2df3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2df400: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2df400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2df404: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2df404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2df408: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2df408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2df40c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2df40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2df410: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2df410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2df414: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2df414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2df418: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2df418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2df41c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2df41cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2df420: 0x848360b0  lh          $v1, 0x60B0($a0)
    ctx->pc = 0x2df420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24752)));
    // 0x2df424: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2df424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2df428: 0x1020021d  beqz        $at, . + 4 + (0x21D << 2)
    ctx->pc = 0x2DF428u;
    {
        const bool branch_taken_0x2df428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF428u;
        // 0x2df42c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df428) {
            ctx->pc = 0x2DFCA0u;
            goto label_2dfca0;
        }
    }
    ctx->pc = 0x2DF430u;
    // 0x2df430: 0x27b500e4  addiu       $s5, $sp, 0xE4
    ctx->pc = 0x2df430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2df434: 0x27b600e8  addiu       $s6, $sp, 0xE8
    ctx->pc = 0x2df434u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2df438: 0x27b700ec  addiu       $s7, $sp, 0xEC
    ctx->pc = 0x2df438u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2df43c: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x2df43cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_2df440:
    // 0x2df440: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2df440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2df444: 0x78226ca0  lq          $v0, 0x6CA0($at)
    ctx->pc = 0x2df444u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696CA0u));
    // 0x2df448: 0x26046070  addiu       $a0, $s0, 0x6070
    ctx->pc = 0x2df448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24688));
    // 0x2df44c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2df44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df450: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x2df450u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x2df454: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2df454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2df458: 0x78226d00  lq          $v0, 0x6D00($at)
    ctx->pc = 0x2df458u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x696D00u));
    // 0x2df45c: 0x7e026070  sq          $v0, 0x6070($s0)
    ctx->pc = 0x2df45cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 24688), GPR_VEC(ctx, 2));
    // 0x2df460: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x2DF460u;
    SET_GPR_U32(ctx, 31, 0x2DF468u);
    ctx->pc = 0x2DF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF460u;
    // 0x2df464: 0xae006074  sw          $zero, 0x6074($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24692), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x2DF460u, 0x2DF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF468u;
label_2df468:
    // 0x2df468: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2df468u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df46c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2df470: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2df470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2df474: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2df474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df478: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df47c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2df47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2df480: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df484: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2df484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2df488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF488u;
    {
        const bool branch_taken_0x2df488 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2DF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF488u;
        // 0x2df48c: 0x39843  sra         $s3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df488) {
            ctx->pc = 0x2DF498u;
            goto label_2df498;
        }
    }
    ctx->pc = 0x2DF490u;
    // 0x2df490: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2df490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2df494: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x2df494u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_2df498:
    // 0x2df498: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2df49c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF49Cu;
    {
        const bool branch_taken_0x2df49c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2DF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF49Cu;
        // 0x2df4a0: 0x39043  sra         $s2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df49c) {
            ctx->pc = 0x2DF4ACu;
            goto label_2df4ac;
        }
    }
    ctx->pc = 0x2DF4A4u;
    // 0x2df4a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2df4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2df4a8: 0x39043  sra         $s2, $v1, 1
    ctx->pc = 0x2df4a8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 1));
label_2df4ac:
    // 0x2df4ac: 0x8e0360a8  lw          $v1, 0x60A8($s0)
    ctx->pc = 0x2df4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24744)));
    // 0x2df4b0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2df4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2df4b4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2df4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2df4b8: 0x24a57a90  addiu       $a1, $a1, 0x7A90
    ctx->pc = 0x2df4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31376));
    // 0x2df4bc: 0xae0360a0  sw          $v1, 0x60A0($s0)
    ctx->pc = 0x2df4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24736), GPR_U32(ctx, 3));
    // 0x2df4c0: 0x8e0360ac  lw          $v1, 0x60AC($s0)
    ctx->pc = 0x2df4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24748)));
    // 0x2df4c4: 0xae0360a4  sw          $v1, 0x60A4($s0)
    ctx->pc = 0x2df4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24740), GPR_U32(ctx, 3));
    // 0x2df4c8: 0xc4206ca0  lwc1        $f0, 0x6CA0($at)
    ctx->pc = 0x2df4c8u;
    { uint32_t bits = FAST_READ32(0x696CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df4cc: 0x920460b3  lbu         $a0, 0x60B3($s0)
    ctx->pc = 0x2df4ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df4d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df4d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df4d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2df4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2df4d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df4dc: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2df4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2df4e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df4e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2df4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2df4e8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2df4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df4ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2df4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2df4f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2df4f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2df4f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df4f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2df4f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2df4f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df4fc: 0x0  nop
    ctx->pc = 0x2df4fcu;
    // NOP
    // 0x2df500: 0xae0360a8  sw          $v1, 0x60A8($s0)
    ctx->pc = 0x2df500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24744), GPR_U32(ctx, 3));
    // 0x2df504: 0xc4206ca8  lwc1        $f0, 0x6CA8($at)
    ctx->pc = 0x2df504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df508: 0x920460b3  lbu         $a0, 0x60B3($s0)
    ctx->pc = 0x2df508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df50c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df50cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df510: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2df514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df518: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df51c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2df51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2df520: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2df520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2df524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2df528: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2df528u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2df52c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df52cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2df530: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2df530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df534: 0x0  nop
    ctx->pc = 0x2df534u;
    // NOP
    // 0x2df538: 0xae0360ac  sw          $v1, 0x60AC($s0)
    ctx->pc = 0x2df538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24748), GPR_U32(ctx, 3));
    // 0x2df53c: 0x8e0460a0  lw          $a0, 0x60A0($s0)
    ctx->pc = 0x2df53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24736)));
    // 0x2df540: 0x8e0360a8  lw          $v1, 0x60A8($s0)
    ctx->pc = 0x2df540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24744)));
    // 0x2df544: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2df544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2df548: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF548u;
    {
        const bool branch_taken_0x2df548 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2df548) {
            ctx->pc = 0x2DF554u;
            goto label_2df554;
        }
    }
    ctx->pc = 0x2DF550u;
    // 0x2df550: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2df554:
    // 0x2df554: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2df554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2df558: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2DF558u;
    {
        const bool branch_taken_0x2df558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df558) {
            ctx->pc = 0x2DF588u;
            goto label_2df588;
        }
    }
    ctx->pc = 0x2DF560u;
    // 0x2df560: 0x8e0460a4  lw          $a0, 0x60A4($s0)
    ctx->pc = 0x2df560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24740)));
    // 0x2df564: 0x8e0360ac  lw          $v1, 0x60AC($s0)
    ctx->pc = 0x2df564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24748)));
    // 0x2df568: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2df568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2df56c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF56Cu;
    {
        const bool branch_taken_0x2df56c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2df56c) {
            ctx->pc = 0x2DF578u;
            goto label_2df578;
        }
    }
    ctx->pc = 0x2DF574u;
    // 0x2df574: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2df574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2df578:
    // 0x2df578: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2df578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2df57c: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2DF57Cu;
    {
        const bool branch_taken_0x2df57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df57c) {
            ctx->pc = 0x2DF700u;
            goto label_2df700;
        }
    }
    ctx->pc = 0x2DF584u;
    // 0x2df584: 0x0  nop
    ctx->pc = 0x2df584u;
    // NOP
label_2df588:
    // 0x2df588: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2df588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2df58c: 0xc4206ca0  lwc1        $f0, 0x6CA0($at)
    ctx->pc = 0x2df58cu;
    { uint32_t bits = FAST_READ32(0x696CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df590: 0x920460b3  lbu         $a0, 0x60B3($s0)
    ctx->pc = 0x2df590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df594: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2df594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2df598: 0x24a57a90  addiu       $a1, $a1, 0x7A90
    ctx->pc = 0x2df598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31376));
    // 0x2df59c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df59cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df5a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2df5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2df5a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df5a8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x2df5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x2df5ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df5b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2df5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2df5b4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2df5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2df5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2df5bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2df5bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2df5c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df5c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2df5c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2df5c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df5c8: 0x0  nop
    ctx->pc = 0x2df5c8u;
    // NOP
    // 0x2df5cc: 0xae0360a8  sw          $v1, 0x60A8($s0)
    ctx->pc = 0x2df5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24744), GPR_U32(ctx, 3));
    // 0x2df5d0: 0xc4206ca8  lwc1        $f0, 0x6CA8($at)
    ctx->pc = 0x2df5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5d4: 0x920460b3  lbu         $a0, 0x60B3($s0)
    ctx->pc = 0x2df5d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df5d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df5d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df5dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2df5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2df5e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df5e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df5e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2df5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2df5ec: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2df5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2df5f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2df5f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2df5f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2df5f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df5f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2df5fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2df5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2df600: 0x0  nop
    ctx->pc = 0x2df600u;
    // NOP
    // 0x2df604: 0xae0360ac  sw          $v1, 0x60AC($s0)
    ctx->pc = 0x2df604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24748), GPR_U32(ctx, 3));
    // 0x2df608: 0x8e0360a8  lw          $v1, 0x60A8($s0)
    ctx->pc = 0x2df608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24744)));
    // 0x2df60c: 0xae0360a0  sw          $v1, 0x60A0($s0)
    ctx->pc = 0x2df60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24736), GPR_U32(ctx, 3));
    // 0x2df610: 0x8e0360ac  lw          $v1, 0x60AC($s0)
    ctx->pc = 0x2df610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24748)));
    // 0x2df614: 0xae0360a4  sw          $v1, 0x60A4($s0)
    ctx->pc = 0x2df614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24740), GPR_U32(ctx, 3));
    // 0x2df618: 0x920460b3  lbu         $a0, 0x60B3($s0)
    ctx->pc = 0x2df618u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df61c: 0x8e0660ac  lw          $a2, 0x60AC($s0)
    ctx->pc = 0x2df61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24748)));
    // 0x2df620: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2df620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2df624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df628: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df62c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2df62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2df630: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2df630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2df634: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF634u;
    {
        const bool branch_taken_0x2df634 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2DF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF634u;
        // 0x2df638: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df634) {
            ctx->pc = 0x2DF644u;
            goto label_2df644;
        }
    }
    ctx->pc = 0x2DF63Cu;
    // 0x2df63c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2df63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2df640: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2df640u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_2df644:
    // 0x2df644: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2df644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2df648: 0xc58823  subu        $s1, $a2, $a1
    ctx->pc = 0x2df648u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2df64c: 0x10200106  beqz        $at, . + 4 + (0x106 << 2)
    ctx->pc = 0x2DF64Cu;
    {
        const bool branch_taken_0x2df64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF64Cu;
        // 0x2df650: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df64c) {
            ctx->pc = 0x2DFA68u;
            goto label_2dfa68;
        }
    }
    ctx->pc = 0x2DF654u;
    // 0x2df654: 0x0  nop
    ctx->pc = 0x2df654u;
    // NOP
label_2df658:
    // 0x2df658: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2df658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2df65c: 0x8e0560a8  lw          $a1, 0x60A8($s0)
    ctx->pc = 0x2df65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24744)));
    // 0x2df660: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF660u;
    {
        const bool branch_taken_0x2df660 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2DF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF660u;
        // 0x2df664: 0x61843  sra         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df660) {
            ctx->pc = 0x2DF670u;
            goto label_2df670;
        }
    }
    ctx->pc = 0x2DF668u;
    // 0x2df668: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2df668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2df66c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2df66cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2df670:
    // 0x2df670: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x2df670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2df674: 0xa39023  subu        $s2, $a1, $v1
    ctx->pc = 0x2df674u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2df678: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DF678u;
    {
        const bool branch_taken_0x2df678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF678u;
        // 0x2df67c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df678) {
            ctx->pc = 0x2DF6E0u;
            goto label_2df6e0;
        }
    }
    ctx->pc = 0x2DF680u;
label_2df680:
    // 0x2df680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df684: 0x2861018  mult        $v0, $s4, $a2
    ctx->pc = 0x2df684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2df688: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2df688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df68c: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2df68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df690: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2df690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df694: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2df694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2df698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2df698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df69c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2df69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2df6a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2df6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2df6a4: 0xc0b800c  jal         func_2E0030
    ctx->pc = 0x2DF6A4u;
    SET_GPR_U32(ctx, 31, 0x2DF6ACu);
    ctx->pc = 0x2DF6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6A4u;
    // 0x2df6a8: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0030u, 0x2DF6A4u, 0x2DF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6ACu;
label_2df6ac:
    // 0x2df6ac: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2df6acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df6b0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2df6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2df6b4: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2df6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2df6b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2df6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2df6bc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2df6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df6c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df6c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2df6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2df6c8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2df6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df6cc: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2df6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2df6d0: 0x266182a  slt         $v1, $s3, $a2
    ctx->pc = 0x2df6d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2df6d4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2DF6D4u;
    {
        const bool branch_taken_0x2df6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6D4u;
        // 0x2df6d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6d4) {
            ctx->pc = 0x2DF680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df680;
        }
    }
    ctx->pc = 0x2DF6DCu;
    // 0x2df6dc: 0x0  nop
    ctx->pc = 0x2df6dcu;
    // NOP
label_2df6e0:
    // 0x2df6e0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2df6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2df6e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2df6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2df6e8: 0x283282a  slt         $a1, $s4, $v1
    ctx->pc = 0x2df6e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2df6ec: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2DF6ECu;
    {
        const bool branch_taken_0x2df6ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6ECu;
        // 0x2df6f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6ec) {
            ctx->pc = 0x2DF658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df658;
        }
    }
    ctx->pc = 0x2DF6F4u;
    // 0x2df6f4: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2DF6F4u;
    {
        const bool branch_taken_0x2df6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df6f4) {
            ctx->pc = 0x2DFA68u;
            goto label_2dfa68;
        }
    }
    ctx->pc = 0x2DF6FCu;
    // 0x2df6fc: 0x0  nop
    ctx->pc = 0x2df6fcu;
    // NOP
label_2df700:
    // 0x2df700: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2df700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df704: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2df704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2df708: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2df708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2df70c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df710: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df714: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2df714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2df718: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2df718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df71c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2df71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2df720: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x2df720u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2df724: 0x1032818  mult        $a1, $t0, $v1
    ctx->pc = 0x2df724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2df728: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x2df728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2df72c: 0x102000ce  beqz        $at, . + 4 + (0xCE << 2)
    ctx->pc = 0x2DF72Cu;
    {
        const bool branch_taken_0x2df72c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF72Cu;
        // 0x2df730: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df72c) {
            ctx->pc = 0x2DFA68u;
            goto label_2dfa68;
        }
    }
    ctx->pc = 0x2DF734u;
    // 0x2df734: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2df734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df738:
    // 0x2df738: 0x8e0960a8  lw          $t1, 0x60A8($s0)
    ctx->pc = 0x2df738u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24744)));
    // 0x2df73c: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x2df73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2df740: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x2df740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2df744: 0x1333823  subu        $a3, $t1, $s3
    ctx->pc = 0x2df744u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x2df748: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x2df748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2df74c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2DF74Cu;
    {
        const bool branch_taken_0x2df74c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF74Cu;
        // 0x2df750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df74c) {
            ctx->pc = 0x2DF778u;
            goto label_2df778;
        }
    }
    ctx->pc = 0x2DF754u;
    // 0x2df754: 0xa73023  subu        $a2, $a1, $a3
    ctx->pc = 0x2df754u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2df758: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF758u;
    {
        const bool branch_taken_0x2df758 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2df758) {
            ctx->pc = 0x2DF764u;
            goto label_2df764;
        }
    }
    ctx->pc = 0x2DF760u;
    // 0x2df760: 0x63023  negu        $a2, $a2
    ctx->pc = 0x2df760u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_2df764:
    // 0x2df764: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x2df764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2df768: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2df768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2df76c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df770: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DF770u;
    {
        const bool branch_taken_0x2df770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF770u;
        // 0x2df774: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df770) {
            ctx->pc = 0x2DF7A8u;
            goto label_2df7a8;
        }
    }
    ctx->pc = 0x2DF778u;
label_2df778:
    // 0x2df778: 0x1333821  addu        $a3, $t1, $s3
    ctx->pc = 0x2df778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x2df77c: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x2df77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2df780: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DF780u;
    {
        const bool branch_taken_0x2df780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df780) {
            ctx->pc = 0x2DF7A8u;
            goto label_2df7a8;
        }
    }
    ctx->pc = 0x2DF788u;
    // 0x2df788: 0xa73023  subu        $a2, $a1, $a3
    ctx->pc = 0x2df788u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2df78c: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF78Cu;
    {
        const bool branch_taken_0x2df78c = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2df78c) {
            ctx->pc = 0x2DF798u;
            goto label_2df798;
        }
    }
    ctx->pc = 0x2DF794u;
    // 0x2df794: 0x63023  negu        $a2, $a2
    ctx->pc = 0x2df794u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_2df798:
    // 0x2df798: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x2df798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2df79c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2df79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2df7a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df7a4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2df7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2df7a8:
    // 0x2df7a8: 0x8e0860ac  lw          $t0, 0x60AC($s0)
    ctx->pc = 0x2df7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24748)));
    // 0x2df7ac: 0x1123823  subu        $a3, $t0, $s2
    ctx->pc = 0x2df7acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x2df7b0: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x2df7b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2df7b4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2DF7B4u;
    {
        const bool branch_taken_0x2df7b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df7b4) {
            ctx->pc = 0x2DF7E0u;
            goto label_2df7e0;
        }
    }
    ctx->pc = 0x2DF7BCu;
    // 0x2df7bc: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x2df7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2df7c0: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF7C0u;
    {
        const bool branch_taken_0x2df7c0 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2df7c0) {
            ctx->pc = 0x2DF7CCu;
            goto label_2df7cc;
        }
    }
    ctx->pc = 0x2DF7C8u;
    // 0x2df7c8: 0x63023  negu        $a2, $a2
    ctx->pc = 0x2df7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_2df7cc:
    // 0x2df7cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2df7d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2df7d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df7d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DF7D8u;
    {
        const bool branch_taken_0x2df7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF7D8u;
        // 0x2df7dc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df7d8) {
            ctx->pc = 0x2DF810u;
            goto label_2df810;
        }
    }
    ctx->pc = 0x2DF7E0u;
label_2df7e0:
    // 0x2df7e0: 0x1123821  addu        $a3, $t0, $s2
    ctx->pc = 0x2df7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x2df7e4: 0xe4082a  slt         $at, $a3, $a0
    ctx->pc = 0x2df7e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2df7e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DF7E8u;
    {
        const bool branch_taken_0x2df7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df7e8) {
            ctx->pc = 0x2DF810u;
            goto label_2df810;
        }
    }
    ctx->pc = 0x2DF7F0u;
    // 0x2df7f0: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x2df7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2df7f4: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF7F4u;
    {
        const bool branch_taken_0x2df7f4 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2df7f4) {
            ctx->pc = 0x2DF800u;
            goto label_2df800;
        }
    }
    ctx->pc = 0x2DF7FCu;
    // 0x2df7fc: 0x63023  negu        $a2, $a2
    ctx->pc = 0x2df7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_2df800:
    // 0x2df800: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2df800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2df804: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2df804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2df808: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2df808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df80c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2df80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2df810:
    // 0x2df810: 0x10c00087  beqz        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x2DF810u;
    {
        const bool branch_taken_0x2df810 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df810) {
            ctx->pc = 0x2DFA30u;
            goto label_2dfa30;
        }
    }
    ctx->pc = 0x2DF818u;
    // 0x2df818: 0xae2500b4  sw          $a1, 0xB4($s1)
    ctx->pc = 0x2df818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 5));
    // 0x2df81c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2df81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2df820: 0xae2400b8  sw          $a0, 0xB8($s1)
    ctx->pc = 0x2df820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 4));
    // 0x2df824: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2df828: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x2df828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df82c: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x2df82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2df830: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2df830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2df834: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2df834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2df838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2df838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df83c: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x2df83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2df840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df844: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2df844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2df848: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2df848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df84c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2df84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df850: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2df850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df854: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df858: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2df858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2df85c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2df85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2df860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df864: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2df864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df868: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF868u;
    {
        const bool branch_taken_0x2df868 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF868u;
        // 0x2df86c: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df868) {
            ctx->pc = 0x2DF87Cu;
            goto label_2df87c;
        }
    }
    ctx->pc = 0x2DF870u;
    // 0x2df870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df874: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DF874u;
    {
        const bool branch_taken_0x2df874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF874u;
        // 0x2df878: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df874) {
            ctx->pc = 0x2DF898u;
            goto label_2df898;
        }
    }
    ctx->pc = 0x2DF87Cu;
label_2df87c:
    // 0x2df87c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2df87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2df880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2df880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2df884: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2df884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2df888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df88c: 0x0  nop
    ctx->pc = 0x2df88cu;
    // NOP
    // 0x2df890: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2df890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df894: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2df894u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2df898:
    // 0x2df898: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2df898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2df89c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2df89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2df8a0: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2df8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2df8a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2df8a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df8a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2df8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2df8ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2df8acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df8b0: 0x0  nop
    ctx->pc = 0x2df8b0u;
    // NOP
    // 0x2df8b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2df8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2df8b8: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x2df8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2df8bc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2df8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2df8c0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2df8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2df8c4: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2df8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2df8c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2df8c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2df8cc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2df8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2df8d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2df8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df8d4: 0x0  nop
    ctx->pc = 0x2df8d4u;
    // NOP
    // 0x2df8d8: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x2df8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x2df8dc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2df8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df8e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2df8e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2df8e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df8e8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2df8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2df8ec: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2df8ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df8f0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2df8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df8f4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2df8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df8f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df8fc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2df8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2df900: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2df900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2df904: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df908: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2df908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df90c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF90Cu;
    {
        const bool branch_taken_0x2df90c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF90Cu;
        // 0x2df910: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df90c) {
            ctx->pc = 0x2DF920u;
            goto label_2df920;
        }
    }
    ctx->pc = 0x2DF914u;
    // 0x2df914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DF918u;
    {
        const bool branch_taken_0x2df918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF918u;
        // 0x2df91c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df918) {
            ctx->pc = 0x2DF93Cu;
            goto label_2df93c;
        }
    }
    ctx->pc = 0x2DF920u;
label_2df920:
    // 0x2df920: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2df920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2df924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2df924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2df928: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2df928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df92c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2df92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df930: 0x0  nop
    ctx->pc = 0x2df930u;
    // NOP
    // 0x2df934: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2df934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df938: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2df938u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2df93c:
    // 0x2df93c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x2df93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x2df940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2df940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2df944: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2df944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2df948: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x2df948u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x2df94c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2df94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df950: 0x25087a90  addiu       $t0, $t0, 0x7A90
    ctx->pc = 0x2df950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31376));
    // 0x2df954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df958: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2df958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2df95c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2df95cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2df960: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2df960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2df964: 0x262500bc  addiu       $a1, $s1, 0xBC
    ctx->pc = 0x2df964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    // 0x2df968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df96c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2df96cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2df970: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2df970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2df974: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x2df974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x2df978: 0xc62100b4  lwc1        $f1, 0xB4($s1)
    ctx->pc = 0x2df978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df97c: 0x920960b3  lbu         $t1, 0x60B3($s0)
    ctx->pc = 0x2df97cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df980: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x2df980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df984: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x2df984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095B4u));
    // 0x2df988: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2df988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df98c: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x2df98cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2df990: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x2df990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2df994: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2df994u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2df998: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2df998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2df99c: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x2df99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df9a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2df9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2df9a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2df9a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2df9a8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2df9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2df9ac: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2df9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df9b0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2df9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2df9b4: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x2df9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df9b8: 0x920760b3  lbu         $a3, 0x60B3($s0)
    ctx->pc = 0x2df9b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2df9bc: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x2df9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df9c0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2df9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df9c4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2df9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2df9c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2df9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2df9cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df9d0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2df9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2df9d4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2df9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df9d8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2df9d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2df9dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2df9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2df9e0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2df9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2df9e4: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x2DF9E4u;
    SET_GPR_U32(ctx, 31, 0x2DF9ECu);
    ctx->pc = 0x2DF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF9E4u;
    // 0x2df9e8: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x2DF9E4u, 0x2DF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF9ECu;
label_2df9ec:
    // 0x2df9ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF9ECu;
    {
        const bool branch_taken_0x2df9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF9ECu;
        // 0x2df9f0: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9ec) {
            ctx->pc = 0x2DFA00u;
            goto label_2dfa00;
        }
    }
    ctx->pc = 0x2DF9F4u;
    // 0x2df9f4: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x2df9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940084)));
    // 0x2df9f8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2df9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df9fc: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x2df9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_2dfa00:
    // 0x2dfa00: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2dfa00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2dfa04: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2dfa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2dfa08: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2dfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2dfa0c: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x2dfa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfa10: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2dfa10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dfa14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2dfa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2dfa18: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2dfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2dfa1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfa20: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2dfa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfa24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfa24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dfa28: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x2dfa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x2dfa2c: 0x0  nop
    ctx->pc = 0x2dfa2cu;
    // NOP
label_2dfa30:
    // 0x2dfa30: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2dfa30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2dfa34: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2dfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2dfa38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2dfa38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dfa3c: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2dfa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2dfa40: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2dfa40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dfa44: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2dfa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2dfa48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2dfa48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2dfa4c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2dfa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfa50: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2dfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2dfa54: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x2dfa54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2dfa58: 0x1032818  mult        $a1, $t0, $v1
    ctx->pc = 0x2dfa58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2dfa5c: 0x285282a  slt         $a1, $s4, $a1
    ctx->pc = 0x2dfa5cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2dfa60: 0x14a0ff35  bnez        $a1, . + 4 + (-0xCB << 2)
    ctx->pc = 0x2DFA60u;
    {
        const bool branch_taken_0x2dfa60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA60u;
        // 0x2dfa64: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa60) {
            ctx->pc = 0x2DF738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df738;
        }
    }
    ctx->pc = 0x2DFA68u;
label_2dfa68:
    // 0x2dfa68: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2dfa68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2dfa6c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2dfa6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dfa70: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2dfa70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfa74: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x2DFA74u;
    {
        const bool branch_taken_0x2dfa74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA74u;
        // 0x2dfa78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa74) {
            ctx->pc = 0x2DFC88u;
            goto label_2dfc88;
        }
    }
    ctx->pc = 0x2DFA7Cu;
    // 0x2dfa7c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2dfa7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfa80:
    // 0x2dfa80: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2dfa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2dfa84: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x2dfa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dfa88: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2dfa88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2dfa8c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2dfa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfa90: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x2dfa90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x2dfa94: 0xc66000c0  lwc1        $f0, 0xC0($s3)
    ctx->pc = 0x2dfa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfa98: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x2dfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095B4u));
    // 0x2dfa9c: 0x24e77a90  addiu       $a3, $a3, 0x7A90
    ctx->pc = 0x2dfa9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31376));
    // 0x2dfaa0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dfaa4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2dfaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dfaa8: 0x24c66ca0  addiu       $a2, $a2, 0x6CA0
    ctx->pc = 0x2dfaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27808));
    // 0x2dfaac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2dfaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2dfab0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dfab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dfab4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2dfab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2dfab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dfabc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2dfabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2dfac0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2dfac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfac4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x2dfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2dfac8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2dfac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2dfacc: 0xc66100b8  lwc1        $f1, 0xB8($s3)
    ctx->pc = 0x2dfaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfad0: 0x920860b3  lbu         $t0, 0x60B3($s0)
    ctx->pc = 0x2dfad0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2dfad4: 0xc66000c4  lwc1        $f0, 0xC4($s3)
    ctx->pc = 0x2dfad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfad8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2dfad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2dfadc: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2dfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2dfae0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2dfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2dfae4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfae8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2dfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dfaec: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2dfaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfaf0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2dfaf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2dfaf4: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x2dfaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2dfaf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dfafc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2dfafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2dfb00: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x2dfb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2dfb04: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x2DFB04u;
    SET_GPR_U32(ctx, 31, 0x2DFB0Cu);
    ctx->pc = 0x2DFB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB04u;
    // 0x2dfb08: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x2DFB04u, 0x2DFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB0Cu;
label_2dfb0c:
    // 0x2dfb0c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dfb10: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x2dfb10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x2dfb14: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x2DFB14u;
    SET_GPR_U32(ctx, 31, 0x2DFB1Cu);
    ctx->pc = 0x2DFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB14u;
    // 0x2dfb18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x2DFB14u, 0x2DFB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB1Cu;
label_2dfb1c:
    // 0x2dfb1c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dfb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dfb20: 0x26056070  addiu       $a1, $s0, 0x6070
    ctx->pc = 0x2dfb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24688));
    // 0x2dfb24: 0xc076654  jal         func_1D9950
    ctx->pc = 0x2DFB24u;
    SET_GPR_U32(ctx, 31, 0x2DFB2Cu);
    ctx->pc = 0x2DFB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB24u;
    // 0x2dfb28: 0xa26000c8  sb          $zero, 0xC8($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 200), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x2DFB24u, 0x2DFB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB2Cu;
label_2dfb2c:
    // 0x2dfb2c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2dfb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2dfb30: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2dfb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2dfb34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dfb34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfb38: 0x0  nop
    ctx->pc = 0x2dfb38u;
    // NOP
    // 0x2dfb3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dfb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfb40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFB40u;
    {
        const bool branch_taken_0x2dfb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB40u;
        // 0x2dfb44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb40) {
            ctx->pc = 0x2DFB50u;
            goto label_2dfb50;
        }
    }
    ctx->pc = 0x2DFB48u;
    // 0x2dfb48: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2DFB48u;
    {
        const bool branch_taken_0x2dfb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB48u;
        // 0x2dfb4c: 0xa26300c8  sb          $v1, 0xC8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 200), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb48) {
            ctx->pc = 0x2DFC50u;
            goto label_2dfc50;
        }
    }
    ctx->pc = 0x2DFB50u;
label_2dfb50:
    // 0x2dfb50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dfb50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb54: 0x26720070  addiu       $s2, $s3, 0x70
    ctx->pc = 0x2dfb54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_2dfb58:
    // 0x2dfb58: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2dfb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2dfb5c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x2dfb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dfb60: 0x34638885  ori         $v1, $v1, 0x8885
    ctx->pc = 0x2dfb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34949);
    // 0x2dfb64: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2dfb64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dfb68: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2dfb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfb6c: 0x3c034182  lui         $v1, 0x4182
    ctx->pc = 0x2dfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16770 << 16));
    // 0x2dfb70: 0x3463aaa7  ori         $v1, $v1, 0xAAA7
    ctx->pc = 0x2dfb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43687);
    // 0x2dfb74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dfb74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfb78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2dfb78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2dfb7c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2dfb7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2dfb80: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x2dfb80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2dfb84: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x2dfb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfb88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dfb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dfb8c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2dfb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2dfb90: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2dfb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfb94: 0xc66000bc  lwc1        $f0, 0xBC($s3)
    ctx->pc = 0x2dfb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfb98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfb98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfb9c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x2DFB9Cu;
    {
        const bool branch_taken_0x2dfb9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfb9c) {
            ctx->pc = 0x2DFC40u;
            goto label_2dfc40;
        }
    }
    ctx->pc = 0x2DFBA4u;
    // 0x2dfba4: 0x920460b3  lbu         $a0, 0x60B3($s0)
    ctx->pc = 0x2dfba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2dfba8: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x2dfba8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dfbac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2dfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2dfbb0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2dfbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2dfbb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfbb8: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2dfbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2dfbbc: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x2dfbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2dfbc0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2dfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2dfbc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2dfbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2dfbc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2dfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2dfbcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dfbd0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2dfbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dfbd4: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x2dfbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfbd8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2dfbd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2dfbdc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2dfbdcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2dfbe0: 0x0  nop
    ctx->pc = 0x2dfbe0u;
    // NOP
    // 0x2dfbe4: 0x0  nop
    ctx->pc = 0x2dfbe4u;
    // NOP
    // 0x2dfbe8: 0xc0b7ff0  jal         func_2DFFC0
    ctx->pc = 0x2DFBE8u;
    SET_GPR_U32(ctx, 31, 0x2DFBF0u);
    ctx->pc = 0x2DFBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFBE8u;
    // 0x2dfbec: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFFC0u, 0x2DFBE8u, 0x2DFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBF0u;
label_2dfbf0:
    // 0x2dfbf0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2dfbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2dfbf4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2dfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2dfbf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dfbf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfbfc: 0x24427a90  addiu       $v0, $v0, 0x7A90
    ctx->pc = 0x2dfbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31376));
    // 0x2dfc00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dfc00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dfc04: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2dfc04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2dfc08: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2dfc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2dfc0c: 0x920460b3  lbu         $a0, 0x60B3($s0)
    ctx->pc = 0x2dfc0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2dfc10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2dfc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2dfc14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dfc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfc18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dfc1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dfc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dfc20: 0xc0b7fd8  jal         func_2DFF60
    ctx->pc = 0x2DFC20u;
    SET_GPR_U32(ctx, 31, 0x2DFC28u);
    ctx->pc = 0x2DFC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC20u;
    // 0x2dfc24: 0xc454000c  lwc1        $f20, 0xC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF60u, 0x2DFC20u, 0x2DFC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC28u;
label_2dfc28:
    // 0x2dfc28: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2dfc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2dfc2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dfc2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfc30: 0x0  nop
    ctx->pc = 0x2dfc30u;
    // NOP
    // 0x2dfc34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dfc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dfc38: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2dfc38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2dfc3c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2dfc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_2dfc40:
    // 0x2dfc40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2dfc40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dfc44: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x2dfc44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dfc48: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2DFC48u;
    {
        const bool branch_taken_0x2dfc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC48u;
        // 0x2dfc4c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc48) {
            ctx->pc = 0x2DFB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dfb58;
        }
    }
    ctx->pc = 0x2DFC50u;
label_2dfc50:
    // 0x2dfc50: 0x920560b3  lbu         $a1, 0x60B3($s0)
    ctx->pc = 0x2dfc50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24755)));
    // 0x2dfc54: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2dfc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2dfc58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dfc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dfc5c: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2dfc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2dfc60: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2dfc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dfc64: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2dfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2dfc68: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2dfc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2dfc6c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2dfc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dfc70: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2dfc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2dfc74: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2dfc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2dfc78: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2dfc78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dfc7c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2dfc7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfc80: 0x1460ff7f  bnez        $v1, . + 4 + (-0x81 << 2)
    ctx->pc = 0x2DFC80u;
    {
        const bool branch_taken_0x2dfc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC80u;
        // 0x2dfc84: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc80) {
            ctx->pc = 0x2DFA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dfa80;
        }
    }
    ctx->pc = 0x2DFC88u;
label_2dfc88:
    // 0x2dfc88: 0x860360b0  lh          $v1, 0x60B0($s0)
    ctx->pc = 0x2dfc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24752)));
    // 0x2dfc8c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2dfc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dfc90: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2dfc90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfc94: 0x1460fdea  bnez        $v1, . + 4 + (-0x216 << 2)
    ctx->pc = 0x2DFC94u;
    {
        const bool branch_taken_0x2dfc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc94) {
            ctx->pc = 0x2DF440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df440;
        }
    }
    ctx->pc = 0x2DFC9Cu;
    // 0x2dfc9c: 0x0  nop
    ctx->pc = 0x2dfc9cu;
    // NOP
label_2dfca0:
    // 0x2dfca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dfca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfca4: 0xa60560b0  sh          $a1, 0x60B0($s0)
    ctx->pc = 0x2dfca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24752), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dfca8: 0x920360b2  lbu         $v1, 0x60B2($s0)
    ctx->pc = 0x2dfca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24754)));
    // 0x2dfcac: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2DFCACu;
    {
        const bool branch_taken_0x2dfcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfcac) {
            ctx->pc = 0x2DFF10u;
            goto label_2dff10;
        }
    }
    ctx->pc = 0x2DFCB4u;
    // 0x2dfcb4: 0x92040051  lbu         $a0, 0x51($s0)
    ctx->pc = 0x2dfcb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x2dfcb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dfcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfcbc: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x2DFCBCu;
    {
        const bool branch_taken_0x2dfcbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dfcbc) {
            ctx->pc = 0x2DFE80u;
            goto label_2dfe80;
        }
    }
    ctx->pc = 0x2DFCC4u;
    // 0x2dfcc4: 0x1085004a  beq         $a0, $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2DFCC4u;
    {
        const bool branch_taken_0x2dfcc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2dfcc4) {
            ctx->pc = 0x2DFDF0u;
            goto label_2dfdf0;
        }
    }
    ctx->pc = 0x2DFCCCu;
    // 0x2dfccc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFCCCu;
    {
        const bool branch_taken_0x2dfccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfccc) {
            ctx->pc = 0x2DFCE0u;
            goto label_2dfce0;
        }
    }
    ctx->pc = 0x2DFCD4u;
    // 0x2dfcd4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2DFCD4u;
    {
        const bool branch_taken_0x2dfcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfcd4) {
            ctx->pc = 0x2DFF10u;
            goto label_2dff10;
        }
    }
    ctx->pc = 0x2DFCDCu;
    // 0x2dfcdc: 0x0  nop
    ctx->pc = 0x2dfcdcu;
    // NOP
label_2dfce0:
    // 0x2dfce0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2dfce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2dfce4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2dfce4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2dfce8: 0x2483f37f  addiu       $v1, $a0, -0xC81
    ctx->pc = 0x2dfce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964095));
    // 0x2dfcec: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2dfcecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dfcf0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFCF0u;
    {
        const bool branch_taken_0x2dfcf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCF0u;
        // 0x2dfcf4: 0x2483f0cf  addiu       $v1, $a0, -0xF31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963407));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfcf0) {
            ctx->pc = 0x2DFD10u;
            goto label_2dfd10;
        }
    }
    ctx->pc = 0x2DFCF8u;
    // 0x2dfcf8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2dfcf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dfcfc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFCFCu;
    {
        const bool branch_taken_0x2dfcfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfcfc) {
            ctx->pc = 0x2DFD10u;
            goto label_2dfd10;
        }
    }
    ctx->pc = 0x2DFD04u;
    // 0x2dfd04: 0x24030f33  addiu       $v1, $zero, 0xF33
    ctx->pc = 0x2dfd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3891));
    // 0x2dfd08: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFD08u;
    {
        const bool branch_taken_0x2dfd08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfd08) {
            ctx->pc = 0x2DFD18u;
            goto label_2dfd18;
        }
    }
    ctx->pc = 0x2DFD10u;
label_2dfd10:
    // 0x2dfd10: 0xc0bb588  jal         func_2ED620
    ctx->pc = 0x2DFD10u;
    SET_GPR_U32(ctx, 31, 0x2DFD18u);
    ctx->pc = 0x2DFD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD10u;
    // 0x2dfd14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED620u, 0x2DFD10u, 0x2DFD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD18u;
label_2dfd18:
    // 0x2dfd18: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x2dfd18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dfd1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dfd20: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x2dfd20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dfd24: 0x86040054  lh          $a0, 0x54($s0)
    ctx->pc = 0x2dfd24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dfd28: 0x86030056  lh          $v1, 0x56($s0)
    ctx->pc = 0x2dfd28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2dfd2c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2dfd2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfd30: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2DFD30u;
    {
        const bool branch_taken_0x2dfd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFD30u;
        // 0x2dfd34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd30) {
            ctx->pc = 0x2DFF10u;
            goto label_2dff10;
        }
    }
    ctx->pc = 0x2DFD38u;
    // 0x2dfd38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2dfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2dfd3c: 0xa2030051  sb          $v1, 0x51($s0)
    ctx->pc = 0x2dfd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dfd40: 0x34460dcd  ori         $a2, $v0, 0xDCD
    ctx->pc = 0x2dfd40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2dfd44: 0xa6000054  sh          $zero, 0x54($s0)
    ctx->pc = 0x2dfd44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dfd48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2dfd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dfd4c: 0x8f8780e0  lw          $a3, -0x7F20($gp)
    ctx->pc = 0x2dfd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dfd50: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2dfd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dfd54: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2dfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2dfd58: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2dfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dfd5c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x2dfd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2dfd60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2dfd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dfd64: 0xaf8680e0  sw          $a2, -0x7F20($gp)
    ctx->pc = 0x2dfd64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 6));
    // 0x2dfd68: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x2dfd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dfd6c: 0x63302  srl         $a2, $a2, 12
    ctx->pc = 0x2dfd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x2dfd70: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x2dfd70u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2dfd74: 0x0  nop
    ctx->pc = 0x2dfd74u;
    // NOP
    // 0x2dfd78: 0x0  nop
    ctx->pc = 0x2dfd78u;
    // NOP
    // 0x2dfd7c: 0x2810  mfhi        $a1
    ctx->pc = 0x2dfd7cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2dfd80: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x2dfd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2dfd84: 0xa6050056  sh          $a1, 0x56($s0)
    ctx->pc = 0x2dfd84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dfd88: 0x86050056  lh          $a1, 0x56($s0)
    ctx->pc = 0x2dfd88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2dfd8c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2dfd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dfd90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2dfd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dfd94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2dfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dfd98: 0xc0ac8bc  jal         func_2B22F0
    ctx->pc = 0x2DFD98u;
    SET_GPR_U32(ctx, 31, 0x2DFDA0u);
    ctx->pc = 0x2DFD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFD98u;
    // 0x2dfd9c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22F0u, 0x2DFD98u, 0x2DFDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDA0u;
label_2dfda0:
    // 0x2dfda0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2dfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2dfda4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2dfda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2dfda8: 0x244268c0  addiu       $v0, $v0, 0x68C0
    ctx->pc = 0x2dfda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26816));
    // 0x2dfdac: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2dfdacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2dfdb0: 0x784c0000  lq          $t4, 0x0($v0)
    ctx->pc = 0x2dfdb0u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x4E68C0u));
    // 0x2dfdb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dfdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfdb8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2dfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2dfdbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dfdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dfdc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dfdc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2dfdc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2dfdccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdd0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2dfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2dfdd4: 0x7cec0000  sq          $t4, 0x0($a3)
    ctx->pc = 0x2dfdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 12));
    // 0x2dfdd8: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x2dfdd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2dfddc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2DFDDCu;
    SET_GPR_U32(ctx, 31, 0x2DFDE4u);
    ctx->pc = 0x2DFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFDDCu;
    // 0x2dfde0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2DFDDCu, 0x2DFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDE4u;
label_2dfde4:
    // 0x2dfde4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2DFDE4u;
    {
        const bool branch_taken_0x2dfde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfde4) {
            ctx->pc = 0x2DFF10u;
            goto label_2dff10;
        }
    }
    ctx->pc = 0x2DFDECu;
    // 0x2dfdec: 0x0  nop
    ctx->pc = 0x2dfdecu;
    // NOP
label_2dfdf0:
    // 0x2dfdf0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2dfdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2dfdf4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2dfdf4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2dfdf8: 0x2483f37f  addiu       $v1, $a0, -0xC81
    ctx->pc = 0x2dfdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964095));
    // 0x2dfdfc: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2dfdfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dfe00: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFE00u;
    {
        const bool branch_taken_0x2dfe00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE00u;
        // 0x2dfe04: 0x2483f0cf  addiu       $v1, $a0, -0xF31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963407));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe00) {
            ctx->pc = 0x2DFE20u;
            goto label_2dfe20;
        }
    }
    ctx->pc = 0x2DFE08u;
    // 0x2dfe08: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2dfe08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dfe0c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFE0Cu;
    {
        const bool branch_taken_0x2dfe0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe0c) {
            ctx->pc = 0x2DFE20u;
            goto label_2dfe20;
        }
    }
    ctx->pc = 0x2DFE14u;
    // 0x2dfe14: 0x24030f33  addiu       $v1, $zero, 0xF33
    ctx->pc = 0x2dfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3891));
    // 0x2dfe18: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFE18u;
    {
        const bool branch_taken_0x2dfe18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfe18) {
            ctx->pc = 0x2DFE28u;
            goto label_2dfe28;
        }
    }
    ctx->pc = 0x2DFE20u;
label_2dfe20:
    // 0x2dfe20: 0xc0bb588  jal         func_2ED620
    ctx->pc = 0x2DFE20u;
    SET_GPR_U32(ctx, 31, 0x2DFE28u);
    ctx->pc = 0x2DFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFE20u;
    // 0x2dfe24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED620u, 0x2DFE20u, 0x2DFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE28u;
label_2dfe28:
    // 0x2dfe28: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x2dfe28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dfe2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dfe30: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x2dfe30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dfe34: 0x86040054  lh          $a0, 0x54($s0)
    ctx->pc = 0x2dfe34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dfe38: 0x86030056  lh          $v1, 0x56($s0)
    ctx->pc = 0x2dfe38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2dfe3c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2dfe3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfe40: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DFE40u;
    {
        const bool branch_taken_0x2dfe40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE40u;
        // 0x2dfe44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe40) {
            ctx->pc = 0x2DFF10u;
            goto label_2dff10;
        }
    }
    ctx->pc = 0x2DFE48u;
    // 0x2dfe48: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2dfe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2dfe4c: 0xa2040051  sb          $a0, 0x51($s0)
    ctx->pc = 0x2dfe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dfe50: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2dfe50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2dfe54: 0xa6000054  sh          $zero, 0x54($s0)
    ctx->pc = 0x2dfe54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dfe58: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2dfe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dfe5c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2dfe5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dfe60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dfe64: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dfe64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2dfe68: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dfe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dfe6c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2dfe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2dfe70: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2dfe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2dfe74: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2dfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2dfe78: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2DFE78u;
    {
        const bool branch_taken_0x2dfe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE78u;
        // 0x2dfe7c: 0xa6030056  sh          $v1, 0x56($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe78) {
            ctx->pc = 0x2DFF10u;
            goto label_2dff10;
        }
    }
    ctx->pc = 0x2DFE80u;
label_2dfe80:
    // 0x2dfe80: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2dfe80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2dfe84: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2dfe84u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2dfe88: 0x2483f37f  addiu       $v1, $a0, -0xC81
    ctx->pc = 0x2dfe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964095));
    // 0x2dfe8c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2dfe8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dfe90: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFE90u;
    {
        const bool branch_taken_0x2dfe90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE90u;
        // 0x2dfe94: 0x2483f0cf  addiu       $v1, $a0, -0xF31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963407));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe90) {
            ctx->pc = 0x2DFEB0u;
            goto label_2dfeb0;
        }
    }
    ctx->pc = 0x2DFE98u;
    // 0x2dfe98: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2dfe98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dfe9c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFE9Cu;
    {
        const bool branch_taken_0x2dfe9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe9c) {
            ctx->pc = 0x2DFEB0u;
            goto label_2dfeb0;
        }
    }
    ctx->pc = 0x2DFEA4u;
    // 0x2dfea4: 0x24030f33  addiu       $v1, $zero, 0xF33
    ctx->pc = 0x2dfea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3891));
    // 0x2dfea8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFEA8u;
    {
        const bool branch_taken_0x2dfea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dfea8) {
            ctx->pc = 0x2DFEB8u;
            goto label_2dfeb8;
        }
    }
    ctx->pc = 0x2DFEB0u;
label_2dfeb0:
    // 0x2dfeb0: 0xc0bb588  jal         func_2ED620
    ctx->pc = 0x2DFEB0u;
    SET_GPR_U32(ctx, 31, 0x2DFEB8u);
    ctx->pc = 0x2DFEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFEB0u;
    // 0x2dfeb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED620u, 0x2DFEB0u, 0x2DFEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFEB8u;
label_2dfeb8:
    // 0x2dfeb8: 0x86030054  lh          $v1, 0x54($s0)
    ctx->pc = 0x2dfeb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dfebc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dfec0: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x2dfec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dfec4: 0x86040054  lh          $a0, 0x54($s0)
    ctx->pc = 0x2dfec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dfec8: 0x86030056  lh          $v1, 0x56($s0)
    ctx->pc = 0x2dfec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2dfecc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2dfeccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dfed0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DFED0u;
    {
        const bool branch_taken_0x2dfed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfed0) {
            ctx->pc = 0x2DFF10u;
            goto label_2dff10;
        }
    }
    ctx->pc = 0x2DFED8u;
    // 0x2dfed8: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x2dfed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfedc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2dfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2dfee0: 0xa6000054  sh          $zero, 0x54($s0)
    ctx->pc = 0x2dfee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dfee4: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2dfee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2dfee8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2dfee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dfeec: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2dfeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dfef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dfef4: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dfef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2dfef8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dfef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dfefc: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2dfefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2dff00: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x2dff00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x2dff04: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2dff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2dff08: 0xa6030056  sh          $v1, 0x56($s0)
    ctx->pc = 0x2dff08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dff0c: 0x0  nop
    ctx->pc = 0x2dff0cu;
    // NOP
label_2dff10:
    // 0x2dff10: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x2dff10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2dff14: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2dff14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2dff18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFF18u;
    {
        const bool branch_taken_0x2dff18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF18u;
        // 0x2dff1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff18) {
            ctx->pc = 0x2DFF28u;
            goto label_2dff28;
        }
    }
    ctx->pc = 0x2DFF20u;
    // 0x2dff20: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2DFF20u;
    SET_GPR_U32(ctx, 31, 0x2DFF28u);
    ctx->pc = 0x2DFF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF20u;
    // 0x2dff24: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2DFF20u, 0x2DFF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF28u;
label_2dff28:
    // 0x2dff28: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2dff28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dff2c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2dff2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dff30: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2dff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dff34: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2dff34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dff38: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2dff38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dff3c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2dff3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dff40: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2dff40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dff44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2dff44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dff48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2dff48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dff4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dff4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dff50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dff50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff54: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF54u;
        // 0x2dff58: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFF5Cu;
}
