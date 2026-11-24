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

// Function: sub_0031B410
// Address: 0x31b410 - 0x31b55c
void sub_0031B410_0x31b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B410_0x31b410");
#endif

    switch (ctx->pc) {
        case 0x31b454u: goto label_31b454;
        case 0x31b48cu: goto label_31b48c;
        case 0x31b4c4u: goto label_31b4c4;
        case 0x31b4e8u: goto label_31b4e8;
        case 0x31b50cu: goto label_31b50c;
        case 0x31b548u: goto label_31b548;
        default: break;
    }

    ctx->pc = 0x31b410u;

    // 0x31b410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b414: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x31b418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b41c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31b41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31b420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b424: 0x24429430  addiu       $v0, $v0, -0x6BD0
    ctx->pc = 0x31b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939696));
    // 0x31b428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b42c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b430: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x31b430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x31b434: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b438: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x31b438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b43c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x31b43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31b440: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x31b440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31b444: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31b448: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31b448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b44c: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x31B44Cu;
    SET_GPR_U32(ctx, 31, 0x31B454u);
    ctx->pc = 0x31B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B44Cu;
    // 0x31b450: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x31B44Cu, 0x31B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B454u;
label_31b454:
    // 0x31b454: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x31b454u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x31b458: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31b458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31b45c: 0x34496060  ori         $t1, $v0, 0x6060
    ctx->pc = 0x31b45cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x31b460: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x31b460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x31b464: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x31b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x31b468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b470: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x31b470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x31b474: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31b474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31b478: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31b478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b47c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31b480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31b480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b484: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31B484u;
    SET_GPR_U32(ctx, 31, 0x31B48Cu);
    ctx->pc = 0x31B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B484u;
    // 0x31b488: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31B484u, 0x31B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B48Cu;
label_31b48c:
    // 0x31b48c: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x31b48cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31b490: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31b490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31b494: 0x34496060  ori         $t1, $v0, 0x6060
    ctx->pc = 0x31b494u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x31b498: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x31b498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x31b49c: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x31b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x31b4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4a4: 0x2406007d  addiu       $a2, $zero, 0x7D
    ctx->pc = 0x31b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x31b4a8: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x31b4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x31b4ac: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31b4acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31b4b0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b4b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31b4b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b4bc: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31B4BCu;
    SET_GPR_U32(ctx, 31, 0x31B4C4u);
    ctx->pc = 0x31B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4BCu;
    // 0x31b4c0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31B4BCu, 0x31B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4C4u;
label_31b4c4:
    // 0x31b4c4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31b4c8: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31b4cc: 0x2484934c  addiu       $a0, $a0, -0x6CB4
    ctx->pc = 0x31b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939468));
    // 0x31b4d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4d4: 0x240600db  addiu       $a2, $zero, 0xDB
    ctx->pc = 0x31b4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x31b4d8: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x31b4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x31b4dc: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31b4dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31b4e0: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31B4E0u;
    SET_GPR_U32(ctx, 31, 0x31B4E8u);
    ctx->pc = 0x31B4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4E0u;
    // 0x31b4e4: 0x34496060  ori         $t1, $v0, 0x6060 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31B4E0u, 0x31B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4E8u;
label_31b4e8:
    // 0x31b4e8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31b4ec: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31b4f0: 0x24849358  addiu       $a0, $a0, -0x6CA8
    ctx->pc = 0x31b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939480));
    // 0x31b4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4f8: 0x24060139  addiu       $a2, $zero, 0x139
    ctx->pc = 0x31b4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
    // 0x31b4fc: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x31b4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x31b500: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31b500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31b504: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31B504u;
    SET_GPR_U32(ctx, 31, 0x31B50Cu);
    ctx->pc = 0x31B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B504u;
    // 0x31b508: 0x34496060  ori         $t1, $v0, 0x6060 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31B504u, 0x31B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B50Cu;
label_31b50c:
    // 0x31b50c: 0x82230005  lb          $v1, 0x5($s1)
    ctx->pc = 0x31b50cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x31b510: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31b510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31b514: 0x34496060  ori         $t1, $v0, 0x6060
    ctx->pc = 0x31b514u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x31b518: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31b518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31b51c: 0x24849394  addiu       $a0, $a0, -0x6C6C
    ctx->pc = 0x31b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939540));
    // 0x31b520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b524: 0x240700bd  addiu       $a3, $zero, 0xBD
    ctx->pc = 0x31b524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x31b528: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31b528u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31b52c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b534: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31b534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31b538: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31b538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b53c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31b540: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31B540u;
    SET_GPR_U32(ctx, 31, 0x31B548u);
    ctx->pc = 0x31B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B540u;
    // 0x31b544: 0x2446007a  addiu       $a2, $v0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31B540u, 0x31B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B548u;
label_31b548:
    // 0x31b548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b554: 0x3e00008  jr          $ra
    ctx->pc = 0x31B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B554u;
        // 0x31b558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B55Cu;
}
