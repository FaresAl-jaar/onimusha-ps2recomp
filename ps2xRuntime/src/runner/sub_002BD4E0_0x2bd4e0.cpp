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

// Function: sub_002BD4E0
// Address: 0x2bd4e0 - 0x2bd694
void sub_002BD4E0_0x2bd4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD4E0_0x2bd4e0");
#endif

    ctx->pc = 0x2bd4e0u;

    // 0x2bd4e0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bd4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd4e4: 0x217bc  dsll32      $v0, $v0, 30
    ctx->pc = 0x2bd4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 30));
    // 0x2bd4e8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x2bd4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x2bd4ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD4ECu;
    {
        const bool branch_taken_0x2bd4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd4ec) {
            ctx->pc = 0x2BD510u;
            goto label_2bd510;
        }
    }
    ctx->pc = 0x2BD4F4u;
    // 0x2bd4f4: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x2bd4f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd4f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd4fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bd500: 0x8442003e  lh          $v0, 0x3E($v0)
    ctx->pc = 0x2bd500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2bd504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD504u;
    {
        const bool branch_taken_0x2bd504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD504u;
        // 0x2bd508: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd504) {
            ctx->pc = 0x2BD528u;
            goto label_2bd528;
        }
    }
    ctx->pc = 0x2BD50Cu;
    // 0x2bd50c: 0x0  nop
    ctx->pc = 0x2bd50cu;
    // NOP
label_2bd510:
    // 0x2bd510: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x2bd510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bd514: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2bd514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd518: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2bd518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2bd51c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2bd51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd520: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x2bd520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x2bd524: 0x0  nop
    ctx->pc = 0x2bd524u;
    // NOP
label_2bd528:
    // 0x2bd528: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bd528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd52c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD530u;
    {
        const bool branch_taken_0x2bd530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd530) {
            ctx->pc = 0x2BD548u;
            goto label_2bd548;
        }
    }
    ctx->pc = 0x2BD538u;
    // 0x2bd538: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x2bd538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bd53c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2bd53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2bd540: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD540u;
    {
        const bool branch_taken_0x2bd540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD540u;
        // 0x2bd544: 0xa4820020  sh          $v0, 0x20($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd540) {
            ctx->pc = 0x2BD558u;
            goto label_2bd558;
        }
    }
    ctx->pc = 0x2BD548u;
label_2bd548:
    // 0x2bd548: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x2bd548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bd54c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2bd54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2bd550: 0xa4820020  sh          $v0, 0x20($a0)
    ctx->pc = 0x2bd550u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bd554: 0x0  nop
    ctx->pc = 0x2bd554u;
    // NOP
label_2bd558:
    // 0x2bd558: 0x8c850078  lw          $a1, 0x78($a0)
    ctx->pc = 0x2bd558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2bd55c: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2BD55Cu;
    {
        const bool branch_taken_0x2bd55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD55Cu;
        // 0x2bd560: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd55c) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD564u;
    // 0x2bd564: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD564u;
    {
        const bool branch_taken_0x2bd564 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2BD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD564u;
        // 0x2bd568: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd564) {
            ctx->pc = 0x2BD578u;
            goto label_2bd578;
        }
    }
    ctx->pc = 0x2BD56Cu;
    // 0x2bd56c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2bd56cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd570: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD570u;
    {
        const bool branch_taken_0x2bd570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD570u;
        // 0x2bd574: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd570) {
            ctx->pc = 0x2BD590u;
            goto label_2bd590;
        }
    }
    ctx->pc = 0x2BD578u;
label_2bd578:
    // 0x2bd578: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2bd578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2bd57c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd580: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd584: 0x0  nop
    ctx->pc = 0x2bd584u;
    // NOP
    // 0x2bd588: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bd588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd58c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd58cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bd590:
    // 0x2bd590: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bd590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd594: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bd594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bd598: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bd598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bd59c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bd59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bd5a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd5a8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bd5a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bd5ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd5acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd5b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bd5b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd5b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD5B4u;
    {
        const bool branch_taken_0x2bd5b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd5b4) {
            ctx->pc = 0x2BD5CCu;
            goto label_2bd5cc;
        }
    }
    ctx->pc = 0x2BD5BCu;
    // 0x2bd5bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd5bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd5c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd5c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd5c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD5C4u;
    {
        const bool branch_taken_0x2bd5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5C4u;
        // 0x2bd5c8: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5c4) {
            ctx->pc = 0x2BD5E8u;
            goto label_2bd5e8;
        }
    }
    ctx->pc = 0x2BD5CCu;
label_2bd5cc:
    // 0x2bd5cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd5ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd5d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bd5d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd5d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd5d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd5dc: 0x0  nop
    ctx->pc = 0x2bd5dcu;
    // NOP
    // 0x2bd5e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd5e4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bd5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bd5e8:
    // 0x2bd5e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bd5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bd5ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD5ECu;
    {
        const bool branch_taken_0x2bd5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5ec) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD5F4u;
    // 0x2bd5f4: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2bd5f4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2bd5f8:
    // 0x2bd5f8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD5F8u;
    {
        const bool branch_taken_0x2bd5f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F8u;
        // 0x2bd5fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f8) {
            ctx->pc = 0x2BD608u;
            goto label_2bd608;
        }
    }
    ctx->pc = 0x2BD600u;
    // 0x2bd600: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2BD600u;
    {
        const bool branch_taken_0x2bd600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD600u;
        // 0x2bd604: 0xac830078  sw          $v1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd600) {
            ctx->pc = 0x2BD68Cu;
            goto label_2bd68c;
        }
    }
    ctx->pc = 0x2BD608u;
label_2bd608:
    // 0x2bd608: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD608u;
    {
        const bool branch_taken_0x2bd608 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2BD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD608u;
        // 0x2bd60c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd608) {
            ctx->pc = 0x2BD61Cu;
            goto label_2bd61c;
        }
    }
    ctx->pc = 0x2BD610u;
    // 0x2bd610: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2bd610u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD614u;
    {
        const bool branch_taken_0x2bd614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD614u;
        // 0x2bd618: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd614) {
            ctx->pc = 0x2BD634u;
            goto label_2bd634;
        }
    }
    ctx->pc = 0x2BD61Cu;
label_2bd61c:
    // 0x2bd61c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2bd61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2bd620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bd624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd628: 0x0  nop
    ctx->pc = 0x2bd628u;
    // NOP
    // 0x2bd62c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bd62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd630: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bd630u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bd634:
    // 0x2bd634: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bd634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd638: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bd638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bd63c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bd63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bd640: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bd640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bd644: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd64c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bd64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bd650: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd654: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bd654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd658: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD658u;
    {
        const bool branch_taken_0x2bd658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd658) {
            ctx->pc = 0x2BD670u;
            goto label_2bd670;
        }
    }
    ctx->pc = 0x2BD660u;
    // 0x2bd660: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd664: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD668u;
    {
        const bool branch_taken_0x2bd668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd668) {
            ctx->pc = 0x2BD688u;
            goto label_2bd688;
        }
    }
    ctx->pc = 0x2BD670u;
label_2bd670:
    // 0x2bd670: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bd670u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bd674: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bd674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bd678: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd67c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bd67cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bd680: 0x0  nop
    ctx->pc = 0x2bd680u;
    // NOP
    // 0x2bd684: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bd684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bd688:
    // 0x2bd688: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x2bd688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
label_2bd68c:
    // 0x2bd68c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD68Cu;
        // 0x2bd690: 0x24c20006  addiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD694u;
}
