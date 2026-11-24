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

// Function: sub_003D24E0
// Address: 0x3d24e0 - 0x3d2638
void sub_003D24E0_0x3d24e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D24E0_0x3d24e0");
#endif

    switch (ctx->pc) {
        case 0x3d2510u: goto label_3d2510;
        case 0x3d2564u: goto label_3d2564;
        case 0x3d25dcu: goto label_3d25dc;
        case 0x3d2628u: goto label_3d2628;
        default: break;
    }

    ctx->pc = 0x3d24e0u;

    // 0x3d24e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d24e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d24e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d24e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d24e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d24e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d24ec: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x3d24ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3d24f0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3d24f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d24f4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D24F4u;
    {
        const bool branch_taken_0x3d24f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24F4u;
        // 0x3d24f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d24f4) {
            ctx->pc = 0x3D2518u;
            goto label_3d2518;
        }
    }
    ctx->pc = 0x3D24FCu;
    // 0x3d24fc: 0x92032b22  lbu         $v1, 0x2B22($s0)
    ctx->pc = 0x3d24fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3d2500: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2500u;
    {
        const bool branch_taken_0x3d2500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2500) {
            ctx->pc = 0x3D2518u;
            goto label_3d2518;
        }
    }
    ctx->pc = 0x3D2508u;
    // 0x3d2508: 0xc0f487c  jal         func_3D21F0
    ctx->pc = 0x3D2508u;
    SET_GPR_U32(ctx, 31, 0x3D2510u);
    ctx->pc = 0x3D21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D21F0u, 0x3D2508u, 0x3D2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2510u;
label_3d2510:
    // 0x3d2510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2514: 0xa2032b22  sb          $v1, 0x2B22($s0)
    ctx->pc = 0x3d2514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11042), (uint8_t)GPR_U32(ctx, 3));
label_3d2518:
    // 0x3d2518: 0x92042b20  lbu         $a0, 0x2B20($s0)
    ctx->pc = 0x3d2518u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3d251c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d2520: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3D2520u;
    {
        const bool branch_taken_0x3d2520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2520u;
        // 0x3d2524: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2520) {
            ctx->pc = 0x3D25E8u;
            goto label_3d25e8;
        }
    }
    ctx->pc = 0x3D2528u;
    // 0x3d2528: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2528u;
    {
        const bool branch_taken_0x3d2528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d2528) {
            ctx->pc = 0x3D2550u;
            goto label_3d2550;
        }
    }
    ctx->pc = 0x3D2530u;
    // 0x3d2530: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2530u;
    {
        const bool branch_taken_0x3d2530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2530) {
            ctx->pc = 0x3D2540u;
            goto label_3d2540;
        }
    }
    ctx->pc = 0x3D2538u;
    // 0x3d2538: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3D2538u;
    {
        const bool branch_taken_0x3d2538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2538) {
            ctx->pc = 0x3D2628u;
            goto label_3d2628;
        }
    }
    ctx->pc = 0x3D2540u;
label_3d2540:
    // 0x3d2540: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3d2540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d2544: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x3d2544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x3d2548: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3D2548u;
    {
        const bool branch_taken_0x3d2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2548u;
        // 0x3d254c: 0xa603078c  sh          $v1, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2548) {
            ctx->pc = 0x3D2628u;
            goto label_3d2628;
        }
    }
    ctx->pc = 0x3D2550u;
label_3d2550:
    // 0x3d2550: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d2550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d2554: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d2554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d2558: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3d2558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d255c: 0xc0c0894  jal         func_302250
    ctx->pc = 0x3D255Cu;
    SET_GPR_U32(ctx, 31, 0x3D2564u);
    ctx->pc = 0x3D2560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D255Cu;
    // 0x3d2560: 0x8e042b28  lw          $a0, 0x2B28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x3D255Cu, 0x3D2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2564u;
label_3d2564:
    // 0x3d2564: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3D2564u;
    {
        const bool branch_taken_0x3d2564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2564u;
        // 0x3d2568: 0x24030094  addiu       $v1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2564) {
            ctx->pc = 0x3D2628u;
            goto label_3d2628;
        }
    }
    ctx->pc = 0x3D256Cu;
    // 0x3d256c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x3d256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3d2570: 0xa20307f7  sb          $v1, 0x7F7($s0)
    ctx->pc = 0x3d2570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2039), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2574: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d2574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d2578: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d257c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d257cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d2580: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3d2580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3d2584: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d2584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d2588: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d2588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d258c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d258cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d2590: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d2590u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d2594: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d2594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d2598: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d2598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d259c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D259Cu;
    {
        const bool branch_taken_0x3d259c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d259c) {
            ctx->pc = 0x3D25B4u;
            goto label_3d25b4;
        }
    }
    ctx->pc = 0x3D25A4u;
    // 0x3d25a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d25a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d25a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d25a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d25ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D25ACu;
    {
        const bool branch_taken_0x3d25ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D25ACu;
        // 0x3d25b0: 0xa6032b24  sh          $v1, 0x2B24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d25ac) {
            ctx->pc = 0x3D25D0u;
            goto label_3d25d0;
        }
    }
    ctx->pc = 0x3D25B4u;
label_3d25b4:
    // 0x3d25b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d25b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d25b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d25bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d25bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d25c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d25c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d25c4: 0x0  nop
    ctx->pc = 0x3d25c4u;
    // NOP
    // 0x3d25c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d25c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d25cc: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3d25ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3d25d0:
    // 0x3d25d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d25d4: 0xc0f48ac  jal         func_3D22B0
    ctx->pc = 0x3D25D4u;
    SET_GPR_U32(ctx, 31, 0x3D25DCu);
    ctx->pc = 0x3D25D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D25D4u;
    // 0x3d25d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D22B0u, 0x3D25D4u, 0x3D25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D25DCu;
label_3d25dc:
    // 0x3d25dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3D25DCu;
    {
        const bool branch_taken_0x3d25dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d25dc) {
            ctx->pc = 0x3D2628u;
            goto label_3d2628;
        }
    }
    ctx->pc = 0x3D25E4u;
    // 0x3d25e4: 0x0  nop
    ctx->pc = 0x3d25e4u;
    // NOP
label_3d25e8:
    // 0x3d25e8: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3d25e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d25ec: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x3d25ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x3d25f0: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3d25f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d25f4: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3d25f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3d25f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D25F8u;
    {
        const bool branch_taken_0x3d25f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d25f8) {
            ctx->pc = 0x3D2608u;
            goto label_3d2608;
        }
    }
    ctx->pc = 0x3D2600u;
    // 0x3d2600: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d2600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d2604: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3d2604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3d2608:
    // 0x3d2608: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3d2608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3d260c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D260Cu;
    {
        const bool branch_taken_0x3d260c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d260c) {
            ctx->pc = 0x3D2628u;
            goto label_3d2628;
        }
    }
    ctx->pc = 0x3D2614u;
    // 0x3d2614: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3d2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d2618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d261c: 0xa20207f7  sb          $v0, 0x7F7($s0)
    ctx->pc = 0x3d261cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2039), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2620: 0xc0f48ac  jal         func_3D22B0
    ctx->pc = 0x3D2620u;
    SET_GPR_U32(ctx, 31, 0x3D2628u);
    ctx->pc = 0x3D2624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2620u;
    // 0x3d2624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D22B0u, 0x3D2620u, 0x3D2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2628u;
label_3d2628:
    // 0x3d2628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d262c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d262cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2630: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2630u;
        // 0x3d2634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2638u;
}
