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

// Function: sub_00180470
// Address: 0x180470 - 0x180690
void sub_00180470_0x180470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180470_0x180470");
#endif

    switch (ctx->pc) {
        case 0x180508u: goto label_180508;
        case 0x180524u: goto label_180524;
        case 0x180538u: goto label_180538;
        case 0x18054cu: goto label_18054c;
        case 0x180574u: goto label_180574;
        case 0x180588u: goto label_180588;
        case 0x180610u: goto label_180610;
        case 0x180658u: goto label_180658;
        default: break;
    }

    ctx->pc = 0x180470u;

    // 0x180470: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x180470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x180474: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x180474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x180478: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x180478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18047c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x18047cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x180480: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x180480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x180484: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x180484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x180488: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x180488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x18048c: 0x2463d290  addiu       $v1, $v1, -0x2D70
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955664));
    // 0x180490: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x180490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x180494: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x180494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180498: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x180498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18049c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1804a0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1804a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1804a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1804a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1804a8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1804ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1804acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1804b0: 0x2442d294  addiu       $v0, $v0, -0x2D6C
    ctx->pc = 0x1804b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955668));
    // 0x1804b4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1804b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1804b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1804b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1804bc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1804bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1804c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1804c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1804c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1804c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1804c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1804c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1804cc: 0x2442d298  addiu       $v0, $v0, -0x2D68
    ctx->pc = 0x1804ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955672));
    // 0x1804d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1804d4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1804d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1804d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1804d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1804dc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1804dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804e0: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1804e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1804e4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1804e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1804e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1804ec: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1804ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804f0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1804f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1804f4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1804f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1804f8: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1804fc: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1804fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180500: 0xc04171c  jal         func_105C70
    ctx->pc = 0x180500u;
    SET_GPR_U32(ctx, 31, 0x180508u);
    ctx->pc = 0x180504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180500u;
    // 0x180504: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x180500u, 0x180508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180508u;
label_180508:
    // 0x180508: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x180508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x18050c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x18050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x180510: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x180510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x180514: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x180514u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x180518: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x180518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x18051c: 0xc04171c  jal         func_105C70
    ctx->pc = 0x18051Cu;
    SET_GPR_U32(ctx, 31, 0x180524u);
    ctx->pc = 0x180520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18051Cu;
    // 0x180520: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x18051Cu, 0x180524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180524u;
label_180524:
    // 0x180524: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x180524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x180528: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x180528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18052c: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x18052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x180530: 0xc041472  jal         func_1051C8
    ctx->pc = 0x180530u;
    SET_GPR_U32(ctx, 31, 0x180538u);
    ctx->pc = 0x180534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180530u;
    // 0x180534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x180530u, 0x180538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180538u;
label_180538:
    // 0x180538: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x18053c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x180540: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x180544: 0xc041472  jal         func_1051C8
    ctx->pc = 0x180544u;
    SET_GPR_U32(ctx, 31, 0x18054Cu);
    ctx->pc = 0x180548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180544u;
    // 0x180548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x180544u, 0x18054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18054Cu;
label_18054c:
    // 0x18054c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x18054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x180550: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x180550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x180554: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x180554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x180558: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x180558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x18055c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x18055cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x180560: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x180564: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x180564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x180568: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18056c: 0xc041460  jal         func_105180
    ctx->pc = 0x18056Cu;
    SET_GPR_U32(ctx, 31, 0x180574u);
    ctx->pc = 0x180570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18056Cu;
    // 0x180570: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18056Cu, 0x180574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180574u;
label_180574:
    // 0x180574: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x180578: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x180578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18057c: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x180580: 0xc041472  jal         func_1051C8
    ctx->pc = 0x180580u;
    SET_GPR_U32(ctx, 31, 0x180588u);
    ctx->pc = 0x180584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180580u;
    // 0x180584: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x180580u, 0x180588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180588u;
label_180588:
    // 0x180588: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x180588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x18058c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x18058cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x180590: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x180594: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x180598: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x180598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18059c: 0x2463d2c0  addiu       $v1, $v1, -0x2D40
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955712));
    // 0x1805a0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1805a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1805a8: 0x2484d290  addiu       $a0, $a0, -0x2D70
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955664));
    // 0x1805ac: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1805b0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1805b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1805b4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1805b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1805b8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1805b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1805bc: 0x2442d298  addiu       $v0, $v0, -0x2D68
    ctx->pc = 0x1805bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955672));
    // 0x1805c0: 0x2463d294  addiu       $v1, $v1, -0x2D6C
    ctx->pc = 0x1805c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955668));
    // 0x1805c4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1805c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1805cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1805ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1805d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1805d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1805d8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1805dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1805dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1805e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1805e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1805e4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1805e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1805e8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1805ec: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1805f0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1805f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1805f4: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1805f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1805f8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1805f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1805fc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1805fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x180600: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x180600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x180604: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x180604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x180608: 0xc041460  jal         func_105180
    ctx->pc = 0x180608u;
    SET_GPR_U32(ctx, 31, 0x180610u);
    ctx->pc = 0x18060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180608u;
    // 0x18060c: 0x244600a0  addiu       $a2, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x180608u, 0x180610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180610u;
label_180610:
    // 0x180610: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x180614: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x180614u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18061c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x18061cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x180620: 0x26a80010  addiu       $t0, $s5, 0x10
    ctx->pc = 0x180620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x180624: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x180624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x180628: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x180628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x18062c: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x180630: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x180634: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x180634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x180638: 0x7ea90000  sq          $t1, 0x0($s5)
    ctx->pc = 0x180638u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 9));
    // 0x18063c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18063cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180640: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x180640u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x180644: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x180648: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x180648u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x18064c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18064cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180650: 0xc04171c  jal         func_105C70
    ctx->pc = 0x180650u;
    SET_GPR_U32(ctx, 31, 0x180658u);
    ctx->pc = 0x180654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180650u;
    // 0x180654: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x180650u, 0x180658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180658u;
label_180658:
    // 0x180658: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18065c: 0xaea3003c  sw          $v1, 0x3C($s5)
    ctx->pc = 0x18065cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 3));
    // 0x180660: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x180660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x180664: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x180664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x180668: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x180668u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18066c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18066cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180670: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x180670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180674: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x180674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180678: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x180678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18067c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18067cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x180680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180684: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180688: 0x3e00008  jr          $ra
    ctx->pc = 0x180688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180688u;
        // 0x18068c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180690u;
}
