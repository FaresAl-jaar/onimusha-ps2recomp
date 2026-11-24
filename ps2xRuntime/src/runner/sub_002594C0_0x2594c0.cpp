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

// Function: sub_002594C0
// Address: 0x2594c0 - 0x259b48
void sub_002594C0_0x2594c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002594C0_0x2594c0");
#endif

    switch (ctx->pc) {
        case 0x259570u: goto label_259570;
        case 0x25958cu: goto label_25958c;
        case 0x259598u: goto label_259598;
        case 0x2595b8u: goto label_2595b8;
        case 0x2595e8u: goto label_2595e8;
        case 0x259608u: goto label_259608;
        case 0x259620u: goto label_259620;
        case 0x259644u: goto label_259644;
        case 0x25966cu: goto label_25966c;
        case 0x259694u: goto label_259694;
        case 0x2596acu: goto label_2596ac;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596f4u: goto label_2596f4;
        case 0x259754u: goto label_259754;
        case 0x25979cu: goto label_25979c;
        case 0x2597c0u: goto label_2597c0;
        case 0x259800u: goto label_259800;
        case 0x259824u: goto label_259824;
        case 0x259830u: goto label_259830;
        case 0x259858u: goto label_259858;
        case 0x259884u: goto label_259884;
        case 0x2598b4u: goto label_2598b4;
        case 0x259954u: goto label_259954;
        case 0x2599c0u: goto label_2599c0;
        case 0x2599ccu: goto label_2599cc;
        case 0x2599f4u: goto label_2599f4;
        case 0x259a24u: goto label_259a24;
        case 0x259a48u: goto label_259a48;
        case 0x259a70u: goto label_259a70;
        case 0x259a94u: goto label_259a94;
        case 0x259af4u: goto label_259af4;
        case 0x259b0cu: goto label_259b0c;
        default: break;
    }

    ctx->pc = 0x2594c0u;

    // 0x2594c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2594c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2594c4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2594c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2594c8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2594c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2594cc: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2594ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2594d0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2594d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x2594d4: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x2594d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x2594d8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2594d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2594dc: 0x27af00f0  addiu       $t7, $sp, 0xF0
    ctx->pc = 0x2594dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2594e0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2594e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2594e4: 0x24630bd0  addiu       $v1, $v1, 0xBD0
    ctx->pc = 0x2594e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
    // 0x2594e8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2594e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2594ec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2594ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2594f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2594f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2594f4: 0x27ad00d0  addiu       $t5, $sp, 0xD0
    ctx->pc = 0x2594f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2594f8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2594f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2594fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2594fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x259500: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x259500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x259504: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x259504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x259508: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x259508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25950c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25950cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259510: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x259510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x259514: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x259514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x259518: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x259518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25951c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x25951cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x259520: 0x784e0000  lq          $t6, 0x0($v0)
    ctx->pc = 0x259520u;
    SET_GPR_VEC(ctx, 14, FAST_READ128(0x4E0BB0u));
    // 0x259524: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x259524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x259528: 0x784c0010  lq          $t4, 0x10($v0)
    ctx->pc = 0x259528u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x4E0BC0u));
    // 0x25952c: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x25952cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x259530: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x259530u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x259534: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x259534u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259538: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x259538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25953c: 0x7dee0000  sq          $t6, 0x0($t7)
    ctx->pc = 0x25953cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 14));
    // 0x259540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259544: 0x7dec0010  sq          $t4, 0x10($t7)
    ctx->pc = 0x259544u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 12));
    // 0x259548: 0x786c0000  lq          $t4, 0x0($v1)
    ctx->pc = 0x259548u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x4E0BD0u));
    // 0x25954c: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x25954cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E0BE0u));
    // 0x259550: 0x7dac0000  sq          $t4, 0x0($t5)
    ctx->pc = 0x259550u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 12));
    // 0x259554: 0x7da30010  sq          $v1, 0x10($t5)
    ctx->pc = 0x259554u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 3));
    // 0x259558: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x259558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x25955c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x25955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x259560: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x259560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x259564: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x259564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x259568: 0xc07467c  jal         func_1D19F0
    ctx->pc = 0x259568u;
    SET_GPR_U32(ctx, 31, 0x259570u);
    ctx->pc = 0x25956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259568u;
    // 0x25956c: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19F0u, 0x259568u, 0x259570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259570u;
label_259570:
    // 0x259570: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259574: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x259574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x259578: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x259578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x25957c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x25957cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x259580: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x259580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259584: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259584u;
    SET_GPR_U32(ctx, 31, 0x25958Cu);
    ctx->pc = 0x259588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259584u;
    // 0x259588: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259584u, 0x25958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25958Cu;
label_25958c:
    // 0x25958c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x25958cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259590: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x259590u;
    SET_GPR_U32(ctx, 31, 0x259598u);
    ctx->pc = 0x259594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259590u;
    // 0x259594: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x259590u, 0x259598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259598u;
label_259598:
    // 0x259598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25959c: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x25959cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2595a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2595a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2595a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2595a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2595a8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x2595a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x2595ac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2595acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2595b0: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2595B0u;
    SET_GPR_U32(ctx, 31, 0x2595B8u);
    ctx->pc = 0x2595B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595B0u;
    // 0x2595b4: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2595B0u, 0x2595B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595B8u;
label_2595b8:
    // 0x2595b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2595b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2595bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2595bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2595c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2595c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2595c4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2595c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2595c8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x2595c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x2595cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2595ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2595d0: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x2595d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2595d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2595d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2595d8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2595d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2595dc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2595dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2595e0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2595E0u;
    SET_GPR_U32(ctx, 31, 0x2595E8u);
    ctx->pc = 0x2595E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595E0u;
    // 0x2595e4: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2595E0u, 0x2595E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595E8u;
label_2595e8:
    // 0x2595e8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2595e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2595ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2595ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2595f0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2595f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2595f4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2595f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2595f8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x2595f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2595fc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2595fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259600: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259600u;
    SET_GPR_U32(ctx, 31, 0x259608u);
    ctx->pc = 0x259604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259600u;
    // 0x259604: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259600u, 0x259608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259608u;
label_259608:
    // 0x259608: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259608u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25960c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x25960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x259610: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259614: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x259614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x259618: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259618u;
    SET_GPR_U32(ctx, 31, 0x259620u);
    ctx->pc = 0x25961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259618u;
    // 0x25961c: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259618u, 0x259620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259620u;
label_259620:
    // 0x259620: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259624: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x259624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x259628: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x259628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x25962c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259630: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x259630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259634: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259638: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x259638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x25963c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x25963Cu;
    SET_GPR_U32(ctx, 31, 0x259644u);
    ctx->pc = 0x259640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25963Cu;
    // 0x259640: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x25963Cu, 0x259644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259644u;
label_259644:
    // 0x259644: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259648: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x259648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x25964c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x25964cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259654: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x259654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259658: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25965c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x25965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x259660: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x259660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x259664: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259664u;
    SET_GPR_U32(ctx, 31, 0x25966Cu);
    ctx->pc = 0x259668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259664u;
    // 0x259668: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259664u, 0x25966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25966Cu;
label_25966c:
    // 0x25966c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x25966cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259670: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x259670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x259674: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x259674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259678: 0x240201bc  addiu       $v0, $zero, 0x1BC
    ctx->pc = 0x259678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x25967c: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x25967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259684: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x259684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x259688: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x259688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x25968c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x25968Cu;
    SET_GPR_U32(ctx, 31, 0x259694u);
    ctx->pc = 0x259690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25968Cu;
    // 0x259690: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x25968Cu, 0x259694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259694u;
label_259694:
    // 0x259694: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259694u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259698: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x259698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25969c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x25969cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2596a0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2596a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2596a4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2596A4u;
    SET_GPR_U32(ctx, 31, 0x2596ACu);
    ctx->pc = 0x2596A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596A4u;
    // 0x2596a8: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2596A4u, 0x2596ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596ACu;
label_2596ac:
    // 0x2596ac: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2596acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2596b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2596b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596b4: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x2596b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2596b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2596b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596bc: 0x27be0134  addiu       $fp, $sp, 0x134
    ctx->pc = 0x2596bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2596c0:
    // 0x2596c0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2596c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2596c4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2596c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2596c8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x2596c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2596cc: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x2596ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2596d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2596d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2596d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2596d8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2596d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2596dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2596dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2596e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2596e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2596e4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2596e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2596e8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2596e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2596ec: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2596ECu;
    SET_GPR_U32(ctx, 31, 0x2596F4u);
    ctx->pc = 0x2596F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596ECu;
    // 0x2596f0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2596ECu, 0x2596F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596F4u;
label_2596f4:
    // 0x2596f4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2596f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2596f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2596f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2596fc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2596fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259700: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x259700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x259704: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x259704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x259708: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x259708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25970c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x25970cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x259710: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x259710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x259714: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259718: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25971c: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x25971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x259720: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x259720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x259724: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259728: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x259728u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x25972c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25972cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x259730: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x259730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259734: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x259734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x259738: 0x24081009  addiu       $t0, $zero, 0x1009
    ctx->pc = 0x259738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x25973c: 0x24090709  addiu       $t1, $zero, 0x709
    ctx->pc = 0x25973cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1801));
    // 0x259740: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x259740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x259744: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x259744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x259748: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x259748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x25974c: 0xc075458  jal         func_1D5160
    ctx->pc = 0x25974Cu;
    SET_GPR_U32(ctx, 31, 0x259754u);
    ctx->pc = 0x259750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25974Cu;
    // 0x259750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x25974Cu, 0x259754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259754u;
label_259754:
    // 0x259754: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259758: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x259758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25975c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x25975cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x259760: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x259760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x259764: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x259764u;
    {
        const bool branch_taken_0x259764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259764u;
        // 0x259768: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259764) {
            ctx->pc = 0x2596C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2596c0;
        }
    }
    ctx->pc = 0x25976Cu;
    // 0x25976c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x25976cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x259770: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259774: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x259774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x259778: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x259778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x25977c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x25977cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x259780: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x259780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x259784: 0x24131200  addiu       $s3, $zero, 0x1200
    ctx->pc = 0x259784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x259788: 0x24121000  addiu       $s2, $zero, 0x1000
    ctx->pc = 0x259788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x25978c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25978cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259790: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x259790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x259794: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259794u;
    SET_GPR_U32(ctx, 31, 0x25979Cu);
    ctx->pc = 0x259798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259794u;
    // 0x259798: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259794u, 0x25979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25979Cu;
label_25979c:
    // 0x25979c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x25979cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2597a0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x2597a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2597a4: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x2597a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2597a8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2597a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2597ac: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x2597acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2597b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2597b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2597b4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2597b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2597b8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2597B8u;
    SET_GPR_U32(ctx, 31, 0x2597C0u);
    ctx->pc = 0x2597BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597B8u;
    // 0x2597bc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2597B8u, 0x2597C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597C0u;
label_2597c0:
    // 0x2597c0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2597c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2597c4: 0x1619c0  sll         $v1, $s6, 7
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x2597c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2597C8u;
    {
        const bool branch_taken_0x2597c8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2597CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597C8u;
        // 0x2597cc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597c8) {
            ctx->pc = 0x2597D8u;
            goto label_2597d8;
        }
    }
    ctx->pc = 0x2597D0u;
    // 0x2597d0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x2597d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x2597d4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2597d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2597d8:
    // 0x2597d8: 0x24570080  addiu       $s7, $v0, 0x80
    ctx->pc = 0x2597d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2597dc: 0x2ae10100  slti        $at, $s7, 0x100
    ctx->pc = 0x2597dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2597e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2597E0u;
    {
        const bool branch_taken_0x2597e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2597e0) {
            ctx->pc = 0x2597F0u;
            goto label_2597f0;
        }
    }
    ctx->pc = 0x2597E8u;
    // 0x2597e8: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x2597e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2597ec: 0x0  nop
    ctx->pc = 0x2597ecu;
    // NOP
label_2597f0:
    // 0x2597f0: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x2597f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2597f4: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x2597F4u;
    {
        const bool branch_taken_0x2597f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597F4u;
        // 0x2597f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597f4) {
            ctx->pc = 0x259980u;
            goto label_259980;
        }
    }
    ctx->pc = 0x2597FCu;
    // 0x2597fc: 0x0  nop
    ctx->pc = 0x2597fcu;
    // NOP
label_259800:
    // 0x259800: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259804: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x259804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x259808: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x259808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x25980c: 0x121143  sra         $v0, $s2, 5
    ctx->pc = 0x25980cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 5));
    // 0x259810: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259814: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x259814u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x259818: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x259818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x25981c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x25981Cu;
    SET_GPR_U32(ctx, 31, 0x259824u);
    ctx->pc = 0x259820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25981Cu;
    // 0x259820: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x25981Cu, 0x259824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259824u;
label_259824:
    // 0x259824: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259828: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x259828u;
    SET_GPR_U32(ctx, 31, 0x259830u);
    ctx->pc = 0x25982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259828u;
    // 0x25982c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x259828u, 0x259830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259830u;
label_259830:
    // 0x259830: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x259830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259834: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x259834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x259838: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x259838u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25983c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x25983cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x259840: 0x22eb8  dsll        $a1, $v0, 26
    ctx->pc = 0x259840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 26);
    // 0x259844: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x259844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x259848: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x259848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25984c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x259850: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x259850u;
    SET_GPR_U32(ctx, 31, 0x259858u);
    ctx->pc = 0x259854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259850u;
    // 0x259854: 0x458025  or          $s0, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x259850u, 0x259858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259858u;
label_259858:
    // 0x259858: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25985c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x25985cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x259860: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x259860u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x259864: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x259864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x259868: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x259868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x25986c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259870: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x259870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x259874: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259878: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x259878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x25987c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x25987Cu;
    SET_GPR_U32(ctx, 31, 0x259884u);
    ctx->pc = 0x259880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25987Cu;
    // 0x259880: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x25987Cu, 0x259884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259884u;
label_259884:
    // 0x259884: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259888: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x259888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25988c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x25988cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x259890: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x259890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x259894: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x259894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x259898: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x259898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x25989c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x25989cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2598a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2598a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2598a4: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x2598a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2598a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2598a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2598ac: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2598ACu;
    SET_GPR_U32(ctx, 31, 0x2598B4u);
    ctx->pc = 0x2598B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598ACu;
    // 0x2598b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2598ACu, 0x2598B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598B4u;
label_2598b4:
    // 0x2598b4: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x2598b4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2598b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2598b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2598bc: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x2598bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x2598c0: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x2598c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2598c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2598c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2598c8: 0x3c0f4380  lui         $t7, 0x4380
    ctx->pc = 0x2598c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)17280 << 16));
    // 0x2598cc: 0x3c0e42e0  lui         $t6, 0x42E0
    ctx->pc = 0x2598ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)17120 << 16));
    // 0x2598d0: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x2598d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2598d4: 0x27ac00d0  addiu       $t4, $sp, 0xD0
    ctx->pc = 0x2598d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2598d8: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2598d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2598dc: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2598dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2598e0: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2598e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2598e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2598e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2598e8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2598e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2598ec: 0x24081009  addiu       $t0, $zero, 0x1009
    ctx->pc = 0x2598ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x2598f0: 0x24090709  addiu       $t1, $zero, 0x709
    ctx->pc = 0x2598f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1801));
    // 0x2598f4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2598f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2598f8: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x2598f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2598fc: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x2598fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x259900: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x259900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x259904: 0x448f0800  mtc1        $t7, $f1
    ctx->pc = 0x259904u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259908: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x259908u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25990c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x25990cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x259910: 0x27ae012c  addiu       $t6, $sp, 0x12C
    ctx->pc = 0x259910u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x259914: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x259914u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
    // 0x259918: 0x46140b80  add.s       $f14, $f1, $f20
    ctx->pc = 0x259918u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x25991c: 0xafad0110  sw          $t5, 0x110($sp)
    ctx->pc = 0x25991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 13));
    // 0x259920: 0x27ae0114  addiu       $t6, $sp, 0x114
    ctx->pc = 0x259920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x259924: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x259924u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x259928: 0x27ae0118  addiu       $t6, $sp, 0x118
    ctx->pc = 0x259928u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x25992c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x25992cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x259930: 0x461403c0  add.s       $f15, $f0, $f20
    ctx->pc = 0x259930u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x259934: 0x27ae011c  addiu       $t6, $sp, 0x11C
    ctx->pc = 0x259934u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x259938: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x259938u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x25993c: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x25993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    // 0x259940: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x259940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x259944: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x259944u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x259948: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x259948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x25994c: 0xc096434  jal         func_2590D0
    ctx->pc = 0x25994Cu;
    SET_GPR_U32(ctx, 31, 0x259954u);
    ctx->pc = 0x259950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25994Cu;
    // 0x259950: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590D0u, 0x25994Cu, 0x259954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259954u;
label_259954:
    // 0x259954: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259958: 0x2539823  subu        $s3, $s2, $s3
    ctx->pc = 0x259958u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x25995c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x259960: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x259960u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x259964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25996c: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x25996cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x259970: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x259970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x259974: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x259974u;
    {
        const bool branch_taken_0x259974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259974u;
        // 0x259978: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259974) {
            ctx->pc = 0x259800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259800;
        }
    }
    ctx->pc = 0x25997Cu;
    // 0x25997c: 0x0  nop
    ctx->pc = 0x25997cu;
    // NOP
label_259980:
    // 0x259980: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x259980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x259984: 0x9027cea4  lbu         $a3, -0x315C($at)
    ctx->pc = 0x259984u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x259988: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x25998c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x25998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x259990: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x259990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x259994: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x259994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x259998: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x259998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x25999c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2599a0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2599a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2599a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2599a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2599a8: 0x7300a  movz        $a2, $zero, $a3
    ctx->pc = 0x2599a8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x2599ac: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2599acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2599b0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x2599b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2599b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2599b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2599b8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2599B8u;
    SET_GPR_U32(ctx, 31, 0x2599C0u);
    ctx->pc = 0x2599BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599B8u;
    // 0x2599bc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2599B8u, 0x2599C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599C0u;
label_2599c0:
    // 0x2599c0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2599c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2599c4: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2599C4u;
    SET_GPR_U32(ctx, 31, 0x2599CCu);
    ctx->pc = 0x2599C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599C4u;
    // 0x2599c8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2599C4u, 0x2599CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599CCu;
label_2599cc:
    // 0x2599cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2599ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2599d0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x2599d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2599d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2599d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2599d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2599d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2599dc: 0x22eb8  dsll        $a1, $v0, 26
    ctx->pc = 0x2599dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 26);
    // 0x2599e0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2599e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2599e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2599e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2599e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2599e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2599ec: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2599ECu;
    SET_GPR_U32(ctx, 31, 0x2599F4u);
    ctx->pc = 0x2599F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599ECu;
    // 0x2599f0: 0x458025  or          $s0, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2599ECu, 0x2599F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599F4u;
label_2599f4:
    // 0x2599f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2599f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2599f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2599f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2599fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2599fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x259a00: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x259a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x259a04: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x259a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x259a08: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x259a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x259a0c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x259a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x259a10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x259a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259a14: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x259a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x259a18: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259a1c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259A1Cu;
    SET_GPR_U32(ctx, 31, 0x259A24u);
    ctx->pc = 0x259A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259A1Cu;
    // 0x259a20: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259A1Cu, 0x259A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A24u;
label_259a24:
    // 0x259a24: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259a28: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x259a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x259a2c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x259a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259a30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x259a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259a34: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x259a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259a38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259a3c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x259a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x259a40: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259A40u;
    SET_GPR_U32(ctx, 31, 0x259A48u);
    ctx->pc = 0x259A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259A40u;
    // 0x259a44: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259A40u, 0x259A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A48u;
label_259a48:
    // 0x259a48: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259a48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259a4c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x259a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x259a50: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x259a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259a54: 0x240201bc  addiu       $v0, $zero, 0x1BC
    ctx->pc = 0x259a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x259a58: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x259a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259a5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259a60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x259a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x259a64: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x259a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x259a68: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259A68u;
    SET_GPR_U32(ctx, 31, 0x259A70u);
    ctx->pc = 0x259A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259A68u;
    // 0x259a6c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259A68u, 0x259A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A70u;
label_259a70:
    // 0x259a70: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259a70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259a74: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x259a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x259a78: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x259a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259a7c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x259a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x259a80: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x259a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259a84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x259a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x259a88: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x259a8c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x259A8Cu;
    SET_GPR_U32(ctx, 31, 0x259A94u);
    ctx->pc = 0x259A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259A8Cu;
    // 0x259a90: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x259A8Cu, 0x259A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A94u;
label_259a94:
    // 0x259a94: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259a94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259a98: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x259a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x259a9c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259aa0: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x259aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x259aa4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x259aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x259aa8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x259aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x259aac: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x259aacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x259ab0: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x259ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x259ab4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259ab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259abc: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x259abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x259ac0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x259ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x259ac4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259ac8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x259ac8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x259acc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x259ad0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x259ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ad4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x259ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x259ad8: 0x24081009  addiu       $t0, $zero, 0x1009
    ctx->pc = 0x259ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x259adc: 0x24090709  addiu       $t1, $zero, 0x709
    ctx->pc = 0x259adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1801));
    // 0x259ae0: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x259ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x259ae4: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x259ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x259ae8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x259ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x259aec: 0xc075458  jal         func_1D5160
    ctx->pc = 0x259AECu;
    SET_GPR_U32(ctx, 31, 0x259AF4u);
    ctx->pc = 0x259AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259AECu;
    // 0x259af0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x259AECu, 0x259AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AF4u;
label_259af4:
    // 0x259af4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259af8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x259af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x259afc: 0x34458a55  ori         $a1, $v0, 0x8A55
    ctx->pc = 0x259afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35413);
    // 0x259b00: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x259b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x259b04: 0xc074a48  jal         func_1D2920
    ctx->pc = 0x259B04u;
    SET_GPR_U32(ctx, 31, 0x259B0Cu);
    ctx->pc = 0x259B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B04u;
    // 0x259b08: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2920u, 0x259B04u, 0x259B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B0Cu;
label_259b0c:
    // 0x259b0c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259b0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259b10: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x259b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259b14: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x259b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259b18: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x259b18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259b1c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x259b1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x259b20: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x259b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259b24: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x259b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259b28: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x259b28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259b2c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x259b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259b30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x259b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259b34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x259b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259b38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x259b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259b3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x259b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259b40: 0x3e00008  jr          $ra
    ctx->pc = 0x259B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B40u;
        // 0x259b44: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259B48u;
}
