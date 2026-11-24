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

// Function: sub_0033E4A0
// Address: 0x33e4a0 - 0x33e6c0
void sub_0033E4A0_0x33e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E4A0_0x33e4a0");
#endif

    switch (ctx->pc) {
        case 0x33e53cu: goto label_33e53c;
        case 0x33e594u: goto label_33e594;
        case 0x33e5fcu: goto label_33e5fc;
        case 0x33e614u: goto label_33e614;
        case 0x33e62cu: goto label_33e62c;
        case 0x33e644u: goto label_33e644;
        case 0x33e65cu: goto label_33e65c;
        default: break;
    }

    ctx->pc = 0x33e4a0u;

    // 0x33e4a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33e4a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33e4a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33e4ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33e4b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33e4b4: 0x8c8229cc  lw          $v0, 0x29CC($a0)
    ctx->pc = 0x33e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10700)));
    // 0x33e4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E4B8u;
    {
        const bool branch_taken_0x33e4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4B8u;
        // 0x33e4bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4b8) {
            ctx->pc = 0x33E4C8u;
            goto label_33e4c8;
        }
    }
    ctx->pc = 0x33E4C0u;
    // 0x33e4c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33E4C0u;
    {
        const bool branch_taken_0x33e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4C0u;
        // 0x33e4c4: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4c0) {
            ctx->pc = 0x33E4CCu;
            goto label_33e4cc;
        }
    }
    ctx->pc = 0x33E4C8u;
label_33e4c8:
    // 0x33e4c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33e4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e4cc:
    // 0x33e4cc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x33e4ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e4d0: 0x92422af3  lbu         $v0, 0x2AF3($s2)
    ctx->pc = 0x33e4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10995)));
    // 0x33e4d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E4D4u;
    {
        const bool branch_taken_0x33e4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e4d4) {
            ctx->pc = 0x33E4E8u;
            goto label_33e4e8;
        }
    }
    ctx->pc = 0x33E4DCu;
    // 0x33e4dc: 0x92422af4  lbu         $v0, 0x2AF4($s2)
    ctx->pc = 0x33e4dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10996)));
    // 0x33e4e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33e4e4: 0xa2422af4  sb          $v0, 0x2AF4($s2)
    ctx->pc = 0x33e4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10996), (uint8_t)GPR_U32(ctx, 2));
label_33e4e8:
    // 0x33e4e8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e4ec: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x33e4ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33e4f0: 0x2463efe8  addiu       $v1, $v1, -0x1018
    ctx->pc = 0x33e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963176));
    // 0x33e4f4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x33e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x33e4f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e4fc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33e4fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e500: 0x2442eff0  addiu       $v0, $v0, -0x1010
    ctx->pc = 0x33e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x33e504: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x33e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33e508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e50c: 0xa2442af3  sb          $a0, 0x2AF3($s2)
    ctx->pc = 0x33e50cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10995), (uint8_t)GPR_U32(ctx, 4));
    // 0x33e510: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33e510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e514: 0xa2432b00  sb          $v1, 0x2B00($s2)
    ctx->pc = 0x33e514u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11008), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e518: 0xae402afc  sw          $zero, 0x2AFC($s2)
    ctx->pc = 0x33e518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11004), GPR_U32(ctx, 0));
    // 0x33e51c: 0x92430640  lbu         $v1, 0x640($s2)
    ctx->pc = 0x33e51cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x33e520: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33E520u;
    {
        const bool branch_taken_0x33e520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E520u;
        // 0x33e524: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e520) {
            ctx->pc = 0x33E540u;
            goto label_33e540;
        }
    }
    ctx->pc = 0x33E528u;
    // 0x33e528: 0x2442eff8  addiu       $v0, $v0, -0x1008
    ctx->pc = 0x33e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963192));
    // 0x33e52c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x33e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33e530: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x33e530u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e534: 0xc0e2698  jal         func_389A60
    ctx->pc = 0x33E534u;
    SET_GPR_U32(ctx, 31, 0x33E53Cu);
    ctx->pc = 0x33E538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E534u;
    // 0x33e538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x33E534u, 0x33E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E53Cu;
label_33e53c:
    // 0x33e53c: 0x0  nop
    ctx->pc = 0x33e53cu;
    // NOP
label_33e540:
    // 0x33e540: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x33e540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x33e544: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x33e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x33e548: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x33e548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x33e54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e550: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x33e550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x33e554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33e554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e558: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33e55c: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x33e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x33e560: 0x78420530  lq          $v0, 0x530($v0)
    ctx->pc = 0x33e560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1328)));
    // 0x33e564: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x33e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x33e568: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x33e568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x33e56c: 0xc64d2af8  lwc1        $f13, 0x2AF8($s2)
    ctx->pc = 0x33e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33e570: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33e570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33e574: 0x0  nop
    ctx->pc = 0x33e574u;
    // NOP
    // 0x33e578: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33e578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33e57c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33e57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33e580: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x33e580u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33e584: 0x0  nop
    ctx->pc = 0x33e584u;
    // NOP
    // 0x33e588: 0x0  nop
    ctx->pc = 0x33e588u;
    // NOP
    // 0x33e58c: 0xc0cf2ec  jal         func_33CBB0
    ctx->pc = 0x33E58Cu;
    SET_GPR_U32(ctx, 31, 0x33E594u);
    ctx->pc = 0x33CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CBB0u, 0x33E58Cu, 0x33E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E594u;
label_33e594:
    // 0x33e594: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x33e594u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33e598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e59c: 0x7e430810  sq          $v1, 0x810($s2)
    ctx->pc = 0x33e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 2064), GPR_VEC(ctx, 3));
    // 0x33e5a0: 0xa2450820  sb          $a1, 0x820($s2)
    ctx->pc = 0x33e5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2080), (uint8_t)GPR_U32(ctx, 5));
    // 0x33e5a4: 0x92432af2  lbu         $v1, 0x2AF2($s2)
    ctx->pc = 0x33e5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10994)));
    // 0x33e5a8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x33e5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33e5ac: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x33E5ACu;
    {
        const bool branch_taken_0x33e5ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5ACu;
        // 0x33e5b0: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5ac) {
            ctx->pc = 0x33E660u;
            goto label_33e660;
        }
    }
    ctx->pc = 0x33E5B4u;
    // 0x33e5b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e5b8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x33E5B8u;
    {
        const bool branch_taken_0x33e5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5B8u;
        // 0x33e5bc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5b8) {
            ctx->pc = 0x33E650u;
            goto label_33e650;
        }
    }
    ctx->pc = 0x33E5C0u;
    // 0x33e5c0: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x33E5C0u;
    {
        const bool branch_taken_0x33e5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e5c0) {
            ctx->pc = 0x33E638u;
            goto label_33e638;
        }
    }
    ctx->pc = 0x33E5C8u;
    // 0x33e5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e5cc: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33E5CCu;
    {
        const bool branch_taken_0x33e5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33e5cc) {
            ctx->pc = 0x33E620u;
            goto label_33e620;
        }
    }
    ctx->pc = 0x33E5D4u;
    // 0x33e5d4: 0x1085000c  beq         $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x33E5D4u;
    {
        const bool branch_taken_0x33e5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x33e5d4) {
            ctx->pc = 0x33E608u;
            goto label_33e608;
        }
    }
    ctx->pc = 0x33E5DCu;
    // 0x33e5dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E5DCu;
    {
        const bool branch_taken_0x33e5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e5dc) {
            ctx->pc = 0x33E5F0u;
            goto label_33e5f0;
        }
    }
    ctx->pc = 0x33E5E4u;
    // 0x33e5e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33E5E4u;
    {
        const bool branch_taken_0x33e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e5e4) {
            ctx->pc = 0x33E660u;
            goto label_33e660;
        }
    }
    ctx->pc = 0x33E5ECu;
    // 0x33e5ec: 0x0  nop
    ctx->pc = 0x33e5ecu;
    // NOP
label_33e5f0:
    // 0x33e5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e5f4: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x33E5F4u;
    SET_GPR_U32(ctx, 31, 0x33E5FCu);
    ctx->pc = 0x33E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E5F4u;
    // 0x33e5f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x33E5F4u, 0x33E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E5FCu;
label_33e5fc:
    // 0x33e5fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33E5FCu;
    {
        const bool branch_taken_0x33e5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e5fc) {
            ctx->pc = 0x33E660u;
            goto label_33e660;
        }
    }
    ctx->pc = 0x33E604u;
    // 0x33e604: 0x0  nop
    ctx->pc = 0x33e604u;
    // NOP
label_33e608:
    // 0x33e608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e60c: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x33E60Cu;
    SET_GPR_U32(ctx, 31, 0x33E614u);
    ctx->pc = 0x33E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E60Cu;
    // 0x33e610: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x33E60Cu, 0x33E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E614u;
label_33e614:
    // 0x33e614: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33E614u;
    {
        const bool branch_taken_0x33e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e614) {
            ctx->pc = 0x33E660u;
            goto label_33e660;
        }
    }
    ctx->pc = 0x33E61Cu;
    // 0x33e61c: 0x0  nop
    ctx->pc = 0x33e61cu;
    // NOP
label_33e620:
    // 0x33e620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e624: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x33E624u;
    SET_GPR_U32(ctx, 31, 0x33E62Cu);
    ctx->pc = 0x33E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E624u;
    // 0x33e628: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x33E624u, 0x33E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E62Cu;
label_33e62c:
    // 0x33e62c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33E62Cu;
    {
        const bool branch_taken_0x33e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e62c) {
            ctx->pc = 0x33E660u;
            goto label_33e660;
        }
    }
    ctx->pc = 0x33E634u;
    // 0x33e634: 0x0  nop
    ctx->pc = 0x33e634u;
    // NOP
label_33e638:
    // 0x33e638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e63c: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x33E63Cu;
    SET_GPR_U32(ctx, 31, 0x33E644u);
    ctx->pc = 0x33E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E63Cu;
    // 0x33e640: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x33E63Cu, 0x33E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E644u;
label_33e644:
    // 0x33e644: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33E644u;
    {
        const bool branch_taken_0x33e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e644) {
            ctx->pc = 0x33E660u;
            goto label_33e660;
        }
    }
    ctx->pc = 0x33E64Cu;
    // 0x33e64c: 0x0  nop
    ctx->pc = 0x33e64cu;
    // NOP
label_33e650:
    // 0x33e650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e654: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x33E654u;
    SET_GPR_U32(ctx, 31, 0x33E65Cu);
    ctx->pc = 0x33E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E654u;
    // 0x33e658: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x33E654u, 0x33E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E65Cu;
label_33e65c:
    // 0x33e65c: 0x0  nop
    ctx->pc = 0x33e65cu;
    // NOP
label_33e660:
    // 0x33e660: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x33e660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33e664: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x33e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x33e668: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x33e668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x33e66c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x33e66cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33e670: 0x2484f000  addiu       $a0, $a0, -0x1000
    ctx->pc = 0x33e670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963200));
    // 0x33e674: 0x92432af2  lbu         $v1, 0x2AF2($s2)
    ctx->pc = 0x33e674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10994)));
    // 0x33e678: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x33e678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x33e67c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33e680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e684: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33e684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e688: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33E688u;
    {
        const bool branch_taken_0x33e688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e688) {
            ctx->pc = 0x33E6A8u;
            goto label_33e6a8;
        }
    }
    ctx->pc = 0x33E690u;
    // 0x33e690: 0xa2432af1  sb          $v1, 0x2AF1($s2)
    ctx->pc = 0x33e690u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10993), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e694: 0x92432af2  lbu         $v1, 0x2AF2($s2)
    ctx->pc = 0x33e694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10994)));
    // 0x33e698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e69c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33e69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e6a0: 0xa2430780  sb          $v1, 0x780($s2)
    ctx->pc = 0x33e6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e6a4: 0x0  nop
    ctx->pc = 0x33e6a4u;
    // NOP
label_33e6a8:
    // 0x33e6a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33e6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e6ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e6acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x33E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6B8u;
        // 0x33e6bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E6C0u;
}
