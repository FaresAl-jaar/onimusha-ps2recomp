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

// Function: sub_003E23F0
// Address: 0x3e23f0 - 0x3e27a8
void sub_003E23F0_0x3e23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E23F0_0x3e23f0");
#endif

    switch (ctx->pc) {
        case 0x3e2710u: goto label_3e2710;
        case 0x3e274cu: goto label_3e274c;
        case 0x3e2758u: goto label_3e2758;
        case 0x3e2794u: goto label_3e2794;
        default: break;
    }

    ctx->pc = 0x3e23f0u;

    // 0x3e23f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e23f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e23f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e23fc: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e2400: 0x24700278  addiu       $s0, $v1, 0x278
    ctx->pc = 0x3e2400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 632));
    // 0x3e2404: 0x90630290  lbu         $v1, 0x290($v1)
    ctx->pc = 0x3e2404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x3e2408: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3e2408u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e240c: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x3E240Cu;
    {
        const bool branch_taken_0x3e240c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E240Cu;
        // 0x3e2410: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e240c) {
            ctx->pc = 0x3E2610u;
            goto label_3e2610;
        }
    }
    ctx->pc = 0x3E2414u;
    // 0x3e2414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e2414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e2418: 0x24844920  addiu       $a0, $a0, 0x4920
    ctx->pc = 0x3e2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18720));
    // 0x3e241c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e2420: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e2420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e2424: 0x600008  jr          $v1
    ctx->pc = 0x3E2424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E2430u: goto label_3e2430;
            case 0x3E2518u: goto label_3e2518;
            case 0x3E2610u: goto label_3e2610;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2424u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E242Cu;
    // 0x3e242c: 0x0  nop
    ctx->pc = 0x3e242cu;
    // NOP
label_3e2430:
    // 0x3e2430: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3e2430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3e2434: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x3e2434u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3e2438: 0x3c0342ee  lui         $v1, 0x42EE
    ctx->pc = 0x3e2438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17134 << 16));
    // 0x3e243c: 0x3463cfdf  ori         $v1, $v1, 0xCFDF
    ctx->pc = 0x3e243cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53215);
    // 0x3e2440: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x3e2440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x3e2444: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3e2444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3e2448: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x3e2448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3e244c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x3e244cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e2450: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3e2450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3e2454: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e2454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e2458: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3e2458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e245c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e245cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e2460: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e2460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e2464: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e2464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e2468: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e2468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e246c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2470: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e2470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e2474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2478: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e2478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e247c: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x3e247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x3e2480: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e2480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e2484: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x3e2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3e2488: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e2488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e248c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e248cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2490: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x3e2490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2494: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x3e2494u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x3e2498: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3e2498u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3e249c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E249Cu;
    {
        const bool branch_taken_0x3e249c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E249Cu;
        // 0x3e24a0: 0x46022142  mul.s       $f5, $f4, $f2 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e249c) {
            ctx->pc = 0x3E24B4u;
            goto label_3e24b4;
        }
    }
    ctx->pc = 0x3E24A4u;
    // 0x3e24a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e24a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e24a8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e24a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e24ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E24ACu;
    {
        const bool branch_taken_0x3e24ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e24ac) {
            ctx->pc = 0x3E24CCu;
            goto label_3e24cc;
        }
    }
    ctx->pc = 0x3E24B4u;
label_3e24b4:
    // 0x3e24b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e24b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e24b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e24bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e24bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e24c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e24c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e24c4: 0x0  nop
    ctx->pc = 0x3e24c4u;
    // NOP
    // 0x3e24c8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e24c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3e24cc:
    // 0x3e24cc: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E24CCu;
    {
        const bool branch_taken_0x3e24cc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3E24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E24CCu;
        // 0x3e24d0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e24cc) {
            ctx->pc = 0x3E24E0u;
            goto label_3e24e0;
        }
    }
    ctx->pc = 0x3E24D4u;
    // 0x3e24d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e24d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e24d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E24D8u;
    {
        const bool branch_taken_0x3e24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E24D8u;
        // 0x3e24dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e24d8) {
            ctx->pc = 0x3E24F8u;
            goto label_3e24f8;
        }
    }
    ctx->pc = 0x3E24E0u;
label_3e24e0:
    // 0x3e24e0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3e24e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e24e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e24e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e24e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e24e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e24ec: 0x0  nop
    ctx->pc = 0x3e24ecu;
    // NOP
    // 0x3e24f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e24f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e24f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e24f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e24f8:
    // 0x3e24f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e24fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e24fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2500: 0x0  nop
    ctx->pc = 0x3e2500u;
    // NOP
    // 0x3e2504: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e2504u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e2508: 0x0  nop
    ctx->pc = 0x3e2508u;
    // NOP
    // 0x3e250c: 0x0  nop
    ctx->pc = 0x3e250cu;
    // NOP
    // 0x3e2510: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3E2510u;
    {
        const bool branch_taken_0x3e2510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2510u;
        // 0x3e2514: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2510) {
            ctx->pc = 0x3E26B8u;
            goto label_3e26b8;
        }
    }
    ctx->pc = 0x3E2518u;
label_3e2518:
    // 0x3e2518: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3e2518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3e251c: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x3e251cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3e2520: 0x3c0342ee  lui         $v1, 0x42EE
    ctx->pc = 0x3e2520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17134 << 16));
    // 0x3e2524: 0x3463cfdf  ori         $v1, $v1, 0xCFDF
    ctx->pc = 0x3e2524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53215);
    // 0x3e2528: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x3e2528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x3e252c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x3e252cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3e2530: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x3e2530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3e2534: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x3e2534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3e2538: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3e2538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3e253c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3e253cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e2540: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x3e2540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x3e2544: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3e2544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e2548: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e2548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e254c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e2550: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e2550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e2554: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3e2554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e2558: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e2558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e255c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2560: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e2560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e2564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2568: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3e2568u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e256c: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x3e256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x3e2570: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e2570u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e2574: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x3e2574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3e2578: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e2578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e257c: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x3e257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2580: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e2580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2584: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3e2584u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x3e2588: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3e2588u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3e258c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3e258cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3e2590: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2590u;
    {
        const bool branch_taken_0x3e2590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2590u;
        // 0x3e2594: 0x46042942  mul.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2590) {
            ctx->pc = 0x3E25A8u;
            goto label_3e25a8;
        }
    }
    ctx->pc = 0x3E2598u;
    // 0x3e2598: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e259c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e259cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e25a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E25A0u;
    {
        const bool branch_taken_0x3e25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e25a0) {
            ctx->pc = 0x3E25C0u;
            goto label_3e25c0;
        }
    }
    ctx->pc = 0x3E25A8u;
label_3e25a8:
    // 0x3e25a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e25a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e25ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e25acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e25b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e25b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e25b4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e25b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e25b8: 0x0  nop
    ctx->pc = 0x3e25b8u;
    // NOP
    // 0x3e25bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e25bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3e25c0:
    // 0x3e25c0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E25C0u;
    {
        const bool branch_taken_0x3e25c0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3E25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25C0u;
        // 0x3e25c4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e25c0) {
            ctx->pc = 0x3E25D4u;
            goto label_3e25d4;
        }
    }
    ctx->pc = 0x3E25C8u;
    // 0x3e25c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e25c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e25cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E25CCu;
    {
        const bool branch_taken_0x3e25cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E25CCu;
        // 0x3e25d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e25cc) {
            ctx->pc = 0x3E25ECu;
            goto label_3e25ec;
        }
    }
    ctx->pc = 0x3E25D4u;
label_3e25d4:
    // 0x3e25d4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3e25d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e25d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e25d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e25dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e25dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e25e0: 0x0  nop
    ctx->pc = 0x3e25e0u;
    // NOP
    // 0x3e25e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e25e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e25e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e25e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e25ec:
    // 0x3e25ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e25f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e25f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e25f4: 0x0  nop
    ctx->pc = 0x3e25f4u;
    // NOP
    // 0x3e25f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e25f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e25fc: 0x0  nop
    ctx->pc = 0x3e25fcu;
    // NOP
    // 0x3e2600: 0x0  nop
    ctx->pc = 0x3e2600u;
    // NOP
    // 0x3e2604: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3E2604u;
    {
        const bool branch_taken_0x3e2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2604u;
        // 0x3e2608: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2604) {
            ctx->pc = 0x3E26B8u;
            goto label_3e26b8;
        }
    }
    ctx->pc = 0x3E260Cu;
    // 0x3e260c: 0x0  nop
    ctx->pc = 0x3e260cu;
    // NOP
label_3e2610:
    // 0x3e2610: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3e2610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3e2614: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e2614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2618: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e2618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e261c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3e261cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3e2620: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e2620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e2624: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e2624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e2628: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e2628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e262c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e262cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e2630: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e2630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2638: 0x0  nop
    ctx->pc = 0x3e2638u;
    // NOP
    // 0x3e263c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e263cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e2640: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e2640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2644: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2644u;
    {
        const bool branch_taken_0x3e2644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e2644) {
            ctx->pc = 0x3E265Cu;
            goto label_3e265c;
        }
    }
    ctx->pc = 0x3E264Cu;
    // 0x3e264c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e264cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2650: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e2650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e2654: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2654u;
    {
        const bool branch_taken_0x3e2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2654) {
            ctx->pc = 0x3E2674u;
            goto label_3e2674;
        }
    }
    ctx->pc = 0x3E265Cu;
label_3e265c:
    // 0x3e265c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e265cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e2660: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e2660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e2664: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2668: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e2668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e266c: 0x0  nop
    ctx->pc = 0x3e266cu;
    // NOP
    // 0x3e2670: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e2670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3e2674:
    // 0x3e2674: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2674u;
    {
        const bool branch_taken_0x3e2674 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3E2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2674u;
        // 0x3e2678: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2674) {
            ctx->pc = 0x3E2688u;
            goto label_3e2688;
        }
    }
    ctx->pc = 0x3E267Cu;
    // 0x3e267c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e267cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2680: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2680u;
    {
        const bool branch_taken_0x3e2680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2680u;
        // 0x3e2684: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2680) {
            ctx->pc = 0x3E26A0u;
            goto label_3e26a0;
        }
    }
    ctx->pc = 0x3E2688u;
label_3e2688:
    // 0x3e2688: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3e2688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e268c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e268cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e2690: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e2690u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2694: 0x0  nop
    ctx->pc = 0x3e2694u;
    // NOP
    // 0x3e2698: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e2698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e269c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e269cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e26a0:
    // 0x3e26a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e26a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e26a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e26a8: 0x0  nop
    ctx->pc = 0x3e26a8u;
    // NOP
    // 0x3e26ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e26acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e26b0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3e26b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3e26b4: 0x0  nop
    ctx->pc = 0x3e26b4u;
    // NOP
label_3e26b8:
    // 0x3e26b8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3e26b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e26bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e26c0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E26C0u;
    {
        const bool branch_taken_0x3e26c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e26c0) {
            ctx->pc = 0x3E26E0u;
            goto label_3e26e0;
        }
    }
    ctx->pc = 0x3E26C8u;
    // 0x3e26c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E26C8u;
    {
        const bool branch_taken_0x3e26c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e26c8) {
            ctx->pc = 0x3E26D8u;
            goto label_3e26d8;
        }
    }
    ctx->pc = 0x3E26D0u;
    // 0x3e26d0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3E26D0u;
    {
        const bool branch_taken_0x3e26d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e26d0) {
            ctx->pc = 0x3E2798u;
            goto label_3e2798;
        }
    }
    ctx->pc = 0x3E26D8u;
label_3e26d8:
    // 0x3e26d8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3e26d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e26dc: 0x0  nop
    ctx->pc = 0x3e26dcu;
    // NOP
label_3e26e0:
    // 0x3e26e0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3e26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e26e4: 0xe6050010  swc1        $f5, 0x10($s0)
    ctx->pc = 0x3e26e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3e26e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3e26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e26ec: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3e26ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e26f0: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x3e26f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3e26f4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3e26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e26f8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3e26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e26fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e26fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e2700: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e2700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e2704: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e2704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3e2708: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2708u;
    {
        const bool branch_taken_0x3e2708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2708u;
        // 0x3e270c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2708) {
            ctx->pc = 0x3E272Cu;
            goto label_3e272c;
        }
    }
    ctx->pc = 0x3E2710u;
label_3e2710:
    // 0x3e2710: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e2710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e2714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e2714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e2718: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e2718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e271c: 0x0  nop
    ctx->pc = 0x3e271cu;
    // NOP
    // 0x3e2720: 0x0  nop
    ctx->pc = 0x3e2720u;
    // NOP
    // 0x3e2724: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E2724u;
    {
        const bool branch_taken_0x3e2724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2724) {
            ctx->pc = 0x3E2710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2710;
        }
    }
    ctx->pc = 0x3E272Cu;
label_3e272c:
    // 0x3e272c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3e272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2730: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e2734: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3e2734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e2738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e2738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e273c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3e273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3e2740: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e2740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e2744: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3E2744u;
    SET_GPR_U32(ctx, 31, 0x3E274Cu);
    ctx->pc = 0x3E2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2744u;
    // 0x3e2748: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3E2744u, 0x3E274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E274Cu;
label_3e274c:
    // 0x3e274c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3e274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e2750: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2750u;
    {
        const bool branch_taken_0x3e2750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2750u;
        // 0x3e2754: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2750) {
            ctx->pc = 0x3E2774u;
            goto label_3e2774;
        }
    }
    ctx->pc = 0x3E2758u;
label_3e2758:
    // 0x3e2758: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e2758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e275c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e2760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e2760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e2764: 0x0  nop
    ctx->pc = 0x3e2764u;
    // NOP
    // 0x3e2768: 0x0  nop
    ctx->pc = 0x3e2768u;
    // NOP
    // 0x3e276c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E276Cu;
    {
        const bool branch_taken_0x3e276c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e276c) {
            ctx->pc = 0x3E2758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2758;
        }
    }
    ctx->pc = 0x3E2774u;
label_3e2774:
    // 0x3e2774: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3e2774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2778: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e2778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e277c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3e277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e2780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e2780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2784: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3e2784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3e2788: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e2788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e278c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3E278Cu;
    SET_GPR_U32(ctx, 31, 0x3E2794u);
    ctx->pc = 0x3E2790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E278Cu;
    // 0x3e2790: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3E278Cu, 0x3E2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2794u;
label_3e2794:
    // 0x3e2794: 0x0  nop
    ctx->pc = 0x3e2794u;
    // NOP
label_3e2798:
    // 0x3e2798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e2798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e279c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e279cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e27a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E27A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E27A0u;
        // 0x3e27a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E27A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E27A8u;
}
