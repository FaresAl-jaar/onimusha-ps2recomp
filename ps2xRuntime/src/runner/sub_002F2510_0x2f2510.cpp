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

// Function: sub_002F2510
// Address: 0x2f2510 - 0x2f28a8
void sub_002F2510_0x2f2510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2510_0x2f2510");
#endif

    switch (ctx->pc) {
        case 0x2f252cu: goto label_2f252c;
        case 0x2f2760u: goto label_2f2760;
        case 0x2f277cu: goto label_2f277c;
        case 0x2f2784u: goto label_2f2784;
        case 0x2f2794u: goto label_2f2794;
        case 0x2f27a8u: goto label_2f27a8;
        case 0x2f27b8u: goto label_2f27b8;
        default: break;
    }

    ctx->pc = 0x2f2510u;

    // 0x2f2510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f2514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f2514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f2518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f251c: 0xa0802b20  sb          $zero, 0x2B20($a0)
    ctx->pc = 0x2f251cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11040), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f2520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2524: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x2F2524u;
    SET_GPR_U32(ctx, 31, 0x2F252Cu);
    ctx->pc = 0x2F2528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2524u;
    // 0x2f2528: 0xa4800828  sh          $zero, 0x828($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 2088), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x2F2524u, 0x2F252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F252Cu;
label_2f252c:
    // 0x2f252c: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x2f252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x2f2530: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2f2530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2f2534: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f2538: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f2538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f253c: 0xae0306c8  sw          $v1, 0x6C8($s0)
    ctx->pc = 0x2f253cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 3));
    // 0x2f2540: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x2f2540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2f2544: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f2544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f2548: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x2f2548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x2f254c: 0x92032b1c  lbu         $v1, 0x2B1C($s0)
    ctx->pc = 0x2f254cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11036)));
    // 0x2f2550: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2550u;
    {
        const bool branch_taken_0x2f2550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2550u;
        // 0x2f2554: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2550) {
            ctx->pc = 0x2F2560u;
            goto label_2f2560;
        }
    }
    ctx->pc = 0x2F2558u;
    // 0x2f2558: 0x14620091  bne         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2F2558u;
    {
        const bool branch_taken_0x2f2558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2558) {
            ctx->pc = 0x2F27A0u;
            goto label_2f27a0;
        }
    }
    ctx->pc = 0x2F2560u;
label_2f2560:
    // 0x2f2560: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2f2560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2f2564: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2f2564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2568: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2f2568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2f256c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2f256cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f2570: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2f2570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2f2574: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f2574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f257c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f257cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2f2580: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f2580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f2584: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f2584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2588: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2588u;
    {
        const bool branch_taken_0x2f2588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2588) {
            ctx->pc = 0x2F25A0u;
            goto label_2f25a0;
        }
    }
    ctx->pc = 0x2F2590u;
    // 0x2f2590: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f2594: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f2594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f2598: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2598u;
    {
        const bool branch_taken_0x2f2598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2598u;
        // 0x2f259c: 0xa603082e  sh          $v1, 0x82E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2598) {
            ctx->pc = 0x2F25BCu;
            goto label_2f25bc;
        }
    }
    ctx->pc = 0x2F25A0u;
label_2f25a0:
    // 0x2f25a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f25a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f25a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f25a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f25a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f25ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f25acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f25b0: 0x0  nop
    ctx->pc = 0x2f25b0u;
    // NOP
    // 0x2f25b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f25b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f25b8: 0xa603082e  sh          $v1, 0x82E($s0)
    ctx->pc = 0x2f25b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 3));
label_2f25bc:
    // 0x2f25bc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2f25bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2f25c0: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x2f25c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2f25c4: 0x240204d2  addiu       $v0, $zero, 0x4D2
    ctx->pc = 0x2f25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1234));
    // 0x2f25c8: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F25C8u;
    {
        const bool branch_taken_0x2f25c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25C8u;
        // 0x2f25cc: 0x24020455  addiu       $v0, $zero, 0x455 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25c8) {
            ctx->pc = 0x2F26F0u;
            goto label_2f26f0;
        }
    }
    ctx->pc = 0x2F25D0u;
    // 0x2f25d0: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F25D0u;
    {
        const bool branch_taken_0x2f25d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f25d0) {
            ctx->pc = 0x2F26C0u;
            goto label_2f26c0;
        }
    }
    ctx->pc = 0x2F25D8u;
    // 0x2f25d8: 0x24020454  addiu       $v0, $zero, 0x454
    ctx->pc = 0x2f25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1108));
    // 0x2f25dc: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F25DCu;
    {
        const bool branch_taken_0x2f25dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25DCu;
        // 0x2f25e0: 0x24020453  addiu       $v0, $zero, 0x453 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25dc) {
            ctx->pc = 0x2F2698u;
            goto label_2f2698;
        }
    }
    ctx->pc = 0x2F25E4u;
    // 0x2f25e4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F25E4u;
    {
        const bool branch_taken_0x2f25e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f25e4) {
            ctx->pc = 0x2F2668u;
            goto label_2f2668;
        }
    }
    ctx->pc = 0x2F25ECu;
    // 0x2f25ec: 0x24020452  addiu       $v0, $zero, 0x452
    ctx->pc = 0x2f25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
    // 0x2f25f0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F25F0u;
    {
        const bool branch_taken_0x2f25f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25F0u;
        // 0x2f25f4: 0x24020451  addiu       $v0, $zero, 0x451 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25f0) {
            ctx->pc = 0x2F2638u;
            goto label_2f2638;
        }
    }
    ctx->pc = 0x2F25F8u;
    // 0x2f25f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F25F8u;
    {
        const bool branch_taken_0x2f25f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f25f8) {
            ctx->pc = 0x2F2608u;
            goto label_2f2608;
        }
    }
    ctx->pc = 0x2F2600u;
    // 0x2f2600: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2F2600u;
    {
        const bool branch_taken_0x2f2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2600) {
            ctx->pc = 0x2F2720u;
            goto label_2f2720;
        }
    }
    ctx->pc = 0x2F2608u;
label_2f2608:
    // 0x2f2608: 0x3c02464a  lui         $v0, 0x464A
    ctx->pc = 0x2f2608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17994 << 16));
    // 0x2f260c: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x2f260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
    // 0x2f2610: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2f2610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2f2614: 0xae020870  sw          $v0, 0x870($s0)
    ctx->pc = 0x2f2614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 2));
    // 0x2f2618: 0x3c024619  lui         $v0, 0x4619
    ctx->pc = 0x2f2618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17945 << 16));
    // 0x2f261c: 0xae030874  sw          $v1, 0x874($s0)
    ctx->pc = 0x2f261cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 3));
    // 0x2f2620: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2f2620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2f2624: 0xae020878  sw          $v0, 0x878($s0)
    ctx->pc = 0x2f2624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 2));
    // 0x2f2628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f2628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f262c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2F262Cu;
    {
        const bool branch_taken_0x2f262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F262Cu;
        // 0x2f2630: 0xae02087c  sw          $v0, 0x87C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f262c) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2634u;
    // 0x2f2634: 0x0  nop
    ctx->pc = 0x2f2634u;
    // NOP
label_2f2638:
    // 0x2f2638: 0x3c0245c3  lui         $v0, 0x45C3
    ctx->pc = 0x2f2638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17859 << 16));
    // 0x2f263c: 0x34429800  ori         $v0, $v0, 0x9800
    ctx->pc = 0x2f263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38912);
    // 0x2f2640: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2f2640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2f2644: 0xae020870  sw          $v0, 0x870($s0)
    ctx->pc = 0x2f2644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 2));
    // 0x2f2648: 0x3c024619  lui         $v0, 0x4619
    ctx->pc = 0x2f2648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17945 << 16));
    // 0x2f264c: 0xae030874  sw          $v1, 0x874($s0)
    ctx->pc = 0x2f264cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 3));
    // 0x2f2650: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2f2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2f2654: 0xae020878  sw          $v0, 0x878($s0)
    ctx->pc = 0x2f2654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 2));
    // 0x2f2658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f2658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f265c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F265Cu;
    {
        const bool branch_taken_0x2f265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F265Cu;
        // 0x2f2660: 0xae02087c  sw          $v0, 0x87C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f265c) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2664u;
    // 0x2f2664: 0x0  nop
    ctx->pc = 0x2f2664u;
    // NOP
label_2f2668:
    // 0x2f2668: 0x3c0244fd  lui         $v0, 0x44FD
    ctx->pc = 0x2f2668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17661 << 16));
    // 0x2f266c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x2f266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x2f2670: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2f2670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2f2674: 0xae020870  sw          $v0, 0x870($s0)
    ctx->pc = 0x2f2674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 2));
    // 0x2f2678: 0x3c02460f  lui         $v0, 0x460F
    ctx->pc = 0x2f2678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17935 << 16));
    // 0x2f267c: 0xae030874  sw          $v1, 0x874($s0)
    ctx->pc = 0x2f267cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 3));
    // 0x2f2680: 0x3442c400  ori         $v0, $v0, 0xC400
    ctx->pc = 0x2f2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50176);
    // 0x2f2684: 0xae020878  sw          $v0, 0x878($s0)
    ctx->pc = 0x2f2684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 2));
    // 0x2f2688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f2688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f268c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F268Cu;
    {
        const bool branch_taken_0x2f268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F268Cu;
        // 0x2f2690: 0xae02087c  sw          $v0, 0x87C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f268c) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2694u;
    // 0x2f2694: 0x0  nop
    ctx->pc = 0x2f2694u;
    // NOP
label_2f2698:
    // 0x2f2698: 0x3c02440d  lui         $v0, 0x440D
    ctx->pc = 0x2f2698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17421 << 16));
    // 0x2f269c: 0xae020870  sw          $v0, 0x870($s0)
    ctx->pc = 0x2f269cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 2));
    // 0x2f26a0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2f26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2f26a4: 0xae020874  sw          $v0, 0x874($s0)
    ctx->pc = 0x2f26a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 2));
    // 0x2f26a8: 0x3c02460a  lui         $v0, 0x460A
    ctx->pc = 0x2f26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17930 << 16));
    // 0x2f26ac: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x2f26acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x2f26b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f26b4: 0xae030878  sw          $v1, 0x878($s0)
    ctx->pc = 0x2f26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 3));
    // 0x2f26b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F26B8u;
    {
        const bool branch_taken_0x2f26b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26B8u;
        // 0x2f26bc: 0xae02087c  sw          $v0, 0x87C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26b8) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F26C0u;
label_2f26c0:
    // 0x2f26c0: 0x3c0244b8  lui         $v0, 0x44B8
    ctx->pc = 0x2f26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17592 << 16));
    // 0x2f26c4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2f26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2f26c8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2f26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2f26cc: 0xae020870  sw          $v0, 0x870($s0)
    ctx->pc = 0x2f26ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 2));
    // 0x2f26d0: 0x3c024529  lui         $v0, 0x4529
    ctx->pc = 0x2f26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17705 << 16));
    // 0x2f26d4: 0xae030874  sw          $v1, 0x874($s0)
    ctx->pc = 0x2f26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 3));
    // 0x2f26d8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2f26d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2f26dc: 0xae020878  sw          $v0, 0x878($s0)
    ctx->pc = 0x2f26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 2));
    // 0x2f26e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f26e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F26E4u;
    {
        const bool branch_taken_0x2f26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26E4u;
        // 0x2f26e8: 0xae02087c  sw          $v0, 0x87C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26e4) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F26ECu;
    // 0x2f26ec: 0x0  nop
    ctx->pc = 0x2f26ecu;
    // NOP
label_2f26f0:
    // 0x2f26f0: 0x3c024639  lui         $v0, 0x4639
    ctx->pc = 0x2f26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17977 << 16));
    // 0x2f26f4: 0x3443f400  ori         $v1, $v0, 0xF400
    ctx->pc = 0x2f26f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62464);
    // 0x2f26f8: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x2f26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
    // 0x2f26fc: 0xae030870  sw          $v1, 0x870($s0)
    ctx->pc = 0x2f26fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 3));
    // 0x2f2700: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2f2700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2f2704: 0xae020874  sw          $v0, 0x874($s0)
    ctx->pc = 0x2f2704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 2));
    // 0x2f2708: 0x3c024684  lui         $v0, 0x4684
    ctx->pc = 0x2f2708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18052 << 16));
    // 0x2f270c: 0x34438600  ori         $v1, $v0, 0x8600
    ctx->pc = 0x2f270cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34304);
    // 0x2f2710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f2710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f2714: 0xae030878  sw          $v1, 0x878($s0)
    ctx->pc = 0x2f2714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 3));
    // 0x2f2718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2718u;
    {
        const bool branch_taken_0x2f2718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2718u;
        // 0x2f271c: 0xae02087c  sw          $v0, 0x87C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2718) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2720u;
label_2f2720:
    // 0x2f2720: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2f2720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2f2724: 0x7822c660  lq          $v0, -0x39A0($at)
    ctx->pc = 0x2f2724u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x67C660u));
    // 0x2f2728: 0x7e020870  sq          $v0, 0x870($s0)
    ctx->pc = 0x2f2728u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 2));
    // 0x2f272c: 0x0  nop
    ctx->pc = 0x2f272cu;
    // NOP
label_2f2730:
    // 0x2f2730: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x2f2730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2f2734: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f2734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f2738: 0x26040880  addiu       $a0, $s0, 0x880
    ctx->pc = 0x2f2738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    // 0x2f273c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f273cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2740: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x2f2740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2f2744: 0x26060870  addiu       $a2, $s0, 0x870
    ctx->pc = 0x2f2744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x2f2748: 0x7e030890  sq          $v1, 0x890($s0)
    ctx->pc = 0x2f2748u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 3));
    // 0x2f274c: 0x7a020870  lq          $v0, 0x870($s0)
    ctx->pc = 0x2f274cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x2f2750: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2f2750u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x2f2754: 0x7a020870  lq          $v0, 0x870($s0)
    ctx->pc = 0x2f2754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x2f2758: 0xc0414c0  jal         func_105300
    ctx->pc = 0x2F2758u;
    SET_GPR_U32(ctx, 31, 0x2F2760u);
    ctx->pc = 0x2F275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2758u;
    // 0x2f275c: 0x7e020080  sq          $v0, 0x80($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x2F2758u, 0x2F2760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2760u;
label_2f2760:
    // 0x2f2760: 0xc6010894  lwc1        $f1, 0x894($s0)
    ctx->pc = 0x2f2760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2764: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2f2764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2f2768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f276c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f276cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f2770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f2774: 0xc0bc8e0  jal         func_2F2380
    ctx->pc = 0x2F2774u;
    SET_GPR_U32(ctx, 31, 0x2F277Cu);
    ctx->pc = 0x2F2778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2774u;
    // 0x2f2778: 0xe6000884  swc1        $f0, 0x884($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2380u, 0x2F2774u, 0x2F277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F277Cu;
label_2f277c:
    // 0x2f277c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2F277Cu;
    SET_GPR_U32(ctx, 31, 0x2F2784u);
    ctx->pc = 0x2F2780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F277Cu;
    // 0x2f2780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2F277Cu, 0x2F2784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2784u;
label_2f2784:
    // 0x2f2784: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x2f2784u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2f2788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f278c: 0xc0a9f64  jal         func_2A7D90
    ctx->pc = 0x2F278Cu;
    SET_GPR_U32(ctx, 31, 0x2F2794u);
    ctx->pc = 0x2F2790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F278Cu;
    // 0x2f2790: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D90u, 0x2F278Cu, 0x2F2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2794u;
label_2f2794:
    // 0x2f2794: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F2794u;
    {
        const bool branch_taken_0x2f2794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2794u;
        // 0x2f2798: 0xae022b28  sw          $v0, 0x2B28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2794) {
            ctx->pc = 0x2F2840u;
            goto label_2f2840;
        }
    }
    ctx->pc = 0x2F279Cu;
    // 0x2f279c: 0x0  nop
    ctx->pc = 0x2f279cu;
    // NOP
label_2f27a0:
    // 0x2f27a0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2F27A0u;
    SET_GPR_U32(ctx, 31, 0x2F27A8u);
    ctx->pc = 0x2F27A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27A0u;
    // 0x2f27a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2F27A0u, 0x2F27A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27A8u;
label_2f27a8:
    // 0x2f27a8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x2f27a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2f27ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f27acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27b0: 0xc0a9f64  jal         func_2A7D90
    ctx->pc = 0x2F27B0u;
    SET_GPR_U32(ctx, 31, 0x2F27B8u);
    ctx->pc = 0x2F27B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27B0u;
    // 0x2f27b4: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D90u, 0x2F27B0u, 0x2F27B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27B8u;
label_2f27b8:
    // 0x2f27b8: 0xae022b28  sw          $v0, 0x2B28($s0)
    ctx->pc = 0x2f27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
    // 0x2f27bc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2f27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2f27c0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2f27c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f27c4: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2f27c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2f27c8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2f27c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f27cc: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2f27ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2f27d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f27d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f27d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2f27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2f27d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f27d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f27dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f27dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2f27e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f27e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f27e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f27e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f27e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F27E8u;
    {
        const bool branch_taken_0x2f27e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f27e8) {
            ctx->pc = 0x2F2800u;
            goto label_2f2800;
        }
    }
    ctx->pc = 0x2F27F0u;
    // 0x2f27f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f27f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f27f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f27f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f27f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F27F8u;
    {
        const bool branch_taken_0x2f27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27F8u;
        // 0x2f27fc: 0xa604082e  sh          $a0, 0x82E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27f8) {
            ctx->pc = 0x2F281Cu;
            goto label_2f281c;
        }
    }
    ctx->pc = 0x2F2800u;
label_2f2800:
    // 0x2f2800: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f2800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f2804: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2f2804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2f2808: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f2808u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f280c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f280cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f2810: 0x0  nop
    ctx->pc = 0x2f2810u;
    // NOP
    // 0x2f2814: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f2814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f2818: 0xa604082e  sh          $a0, 0x82E($s0)
    ctx->pc = 0x2f2818u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 4));
label_2f281c:
    // 0x2f281c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2820: 0xa20307d8  sb          $v1, 0x7D8($s0)
    ctx->pc = 0x2f2820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f2824: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2f2824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2f2828: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2f2828u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2f282c: 0x24030483  addiu       $v1, $zero, 0x483
    ctx->pc = 0x2f282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x2f2830: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2830u;
    {
        const bool branch_taken_0x2f2830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2830u;
        // 0x2f2834: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2830) {
            ctx->pc = 0x2F2840u;
            goto label_2f2840;
        }
    }
    ctx->pc = 0x2F2838u;
    // 0x2f2838: 0xa6030826  sh          $v1, 0x826($s0)
    ctx->pc = 0x2f2838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f283c: 0x0  nop
    ctx->pc = 0x2f283cu;
    // NOP
label_2f2840:
    // 0x2f2840: 0x920307d9  lbu         $v1, 0x7D9($s0)
    ctx->pc = 0x2f2840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2009)));
    // 0x2f2844: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2844u;
    {
        const bool branch_taken_0x2f2844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2844u;
        // 0x2f2848: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2844) {
            ctx->pc = 0x2F2850u;
            goto label_2f2850;
        }
    }
    ctx->pc = 0x2F284Cu;
    // 0x2f284c: 0xa20307d9  sb          $v1, 0x7D9($s0)
    ctx->pc = 0x2f284cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 3));
label_2f2850:
    // 0x2f2850: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2f2850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2f2854: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x2f2854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2858: 0x3c03c244  lui         $v1, 0xC244
    ctx->pc = 0x2f2858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49732 << 16));
    // 0x2f285c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f285cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2860: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f2860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2864: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f2864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f2868: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2f2868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2f286c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2f286cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2f2870: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2f2870u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f2874: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2f2874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2f2878: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2f2878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2f287c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2f287cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2f2880: 0xa205000a  sb          $a1, 0xA($s0)
    ctx->pc = 0x2f2880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f2884: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2f2884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f2888: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2f2888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f288c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2f288cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2f2890: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2f2890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f2894: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2f2894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2f2898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f289c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f289cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f28a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F28A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28A0u;
        // 0x2f28a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F28A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F28A8u;
}
