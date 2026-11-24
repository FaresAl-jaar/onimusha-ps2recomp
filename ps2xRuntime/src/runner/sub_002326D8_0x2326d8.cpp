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

// Function: sub_002326D8
// Address: 0x2326d8 - 0x232848
void sub_002326D8_0x2326d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002326D8_0x2326d8");
#endif

    switch (ctx->pc) {
        case 0x232714u: goto label_232714;
        case 0x23271cu: goto label_23271c;
        case 0x232724u: goto label_232724;
        case 0x23272cu: goto label_23272c;
        case 0x232734u: goto label_232734;
        case 0x23273cu: goto label_23273c;
        case 0x232744u: goto label_232744;
        case 0x23274cu: goto label_23274c;
        case 0x232754u: goto label_232754;
        case 0x23275cu: goto label_23275c;
        case 0x232764u: goto label_232764;
        case 0x23276cu: goto label_23276c;
        case 0x23277cu: goto label_23277c;
        case 0x23278cu: goto label_23278c;
        case 0x2327a0u: goto label_2327a0;
        case 0x2327c0u: goto label_2327c0;
        case 0x2327dcu: goto label_2327dc;
        case 0x232800u: goto label_232800;
        case 0x232824u: goto label_232824;
        case 0x23282cu: goto label_23282c;
        default: break;
    }

    ctx->pc = 0x2326d8u;

    // 0x2326d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2326d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2326dc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2326e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2326e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2326e4: 0x2490ef68  addiu       $s0, $a0, -0x1098
    ctx->pc = 0x2326e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963048));
    // 0x2326e8: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x2326e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x2326ec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2326ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2326f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BEF68u));
    // 0x2326f4: 0x24635ac8  addiu       $v1, $v1, 0x5AC8
    ctx->pc = 0x2326f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23240));
    // 0x2326f8: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x2326f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x2326fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2326fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x232700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885AC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885AC8u, _value); } while (0);
    // 0x232704: 0x5480004b  bnel        $a0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x232704u;
    {
        const bool branch_taken_0x232704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x232704) {
            ctx->pc = 0x232708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232704u;
            // 0x232708: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232834u;
            goto label_232834;
        }
    }
    ctx->pc = 0x23270Cu;
    // 0x23270c: 0xc08b510  jal         func_22D440
    ctx->pc = 0x23270Cu;
    SET_GPR_U32(ctx, 31, 0x232714u);
    ctx->pc = 0x22D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D440u, 0x23270Cu, 0x232714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232714u;
label_232714:
    // 0x232714: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x232714u;
    SET_GPR_U32(ctx, 31, 0x23271Cu);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x232714u, 0x23271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23271Cu;
label_23271c:
    // 0x23271c: 0xc0944ee  jal         func_2513B8
    ctx->pc = 0x23271Cu;
    SET_GPR_U32(ctx, 31, 0x232724u);
    ctx->pc = 0x2513B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513B8u, 0x23271Cu, 0x232724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232724u;
label_232724:
    // 0x232724: 0xc0941ec  jal         func_2507B0
    ctx->pc = 0x232724u;
    SET_GPR_U32(ctx, 31, 0x23272Cu);
    ctx->pc = 0x2507B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2507B0u, 0x232724u, 0x23272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23272Cu;
label_23272c:
    // 0x23272c: 0xc093f66  jal         func_24FD98
    ctx->pc = 0x23272Cu;
    SET_GPR_U32(ctx, 31, 0x232734u);
    ctx->pc = 0x24FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD98u, 0x23272Cu, 0x232734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232734u;
label_232734:
    // 0x232734: 0xc08ba7e  jal         func_22E9F8
    ctx->pc = 0x232734u;
    SET_GPR_U32(ctx, 31, 0x23273Cu);
    ctx->pc = 0x22E9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E9F8u, 0x232734u, 0x23273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23273Cu;
label_23273c:
    // 0x23273c: 0xc08dbc8  jal         func_236F20
    ctx->pc = 0x23273Cu;
    SET_GPR_U32(ctx, 31, 0x232744u);
    ctx->pc = 0x236F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F20u, 0x23273Cu, 0x232744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232744u;
label_232744:
    // 0x232744: 0xc08d606  jal         func_235818
    ctx->pc = 0x232744u;
    SET_GPR_U32(ctx, 31, 0x23274Cu);
    ctx->pc = 0x235818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235818u, 0x232744u, 0x23274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23274Cu;
label_23274c:
    // 0x23274c: 0xc08bb54  jal         func_22ED50
    ctx->pc = 0x23274Cu;
    SET_GPR_U32(ctx, 31, 0x232754u);
    ctx->pc = 0x22ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED50u, 0x23274Cu, 0x232754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232754u;
label_232754:
    // 0x232754: 0xc08d524  jal         func_235490
    ctx->pc = 0x232754u;
    SET_GPR_U32(ctx, 31, 0x23275Cu);
    ctx->pc = 0x235490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235490u, 0x232754u, 0x23275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23275Cu;
label_23275c:
    // 0x23275c: 0xc093030  jal         func_24C0C0
    ctx->pc = 0x23275Cu;
    SET_GPR_U32(ctx, 31, 0x232764u);
    ctx->pc = 0x24C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C0C0u, 0x23275Cu, 0x232764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232764u;
label_232764:
    // 0x232764: 0xc094ea8  jal         func_253AA0
    ctx->pc = 0x232764u;
    SET_GPR_U32(ctx, 31, 0x23276Cu);
    ctx->pc = 0x253AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253AA0u, 0x232764u, 0x23276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23276Cu;
label_23276c:
    // 0x23276c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x23276cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x232770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232774: 0xc08d530  jal         func_2354C0
    ctx->pc = 0x232774u;
    SET_GPR_U32(ctx, 31, 0x23277Cu);
    ctx->pc = 0x232778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232774u;
    // 0x232778: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354C0u, 0x232774u, 0x23277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23277Cu;
label_23277c:
    // 0x23277c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x23277cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x232780: 0x24842638  addiu       $a0, $a0, 0x2638
    ctx->pc = 0x232780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9784));
    // 0x232784: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x232784u;
    SET_GPR_U32(ctx, 31, 0x23278Cu);
    ctx->pc = 0x232788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232784u;
    // 0x232788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x232784u, 0x23278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23278Cu;
label_23278c:
    // 0x23278c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x23278cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x232790: 0x2484ef88  addiu       $a0, $a0, -0x1078
    ctx->pc = 0x232790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963080));
    // 0x232794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232798: 0xc049590  jal         func_125640
    ctx->pc = 0x232798u;
    SET_GPR_U32(ctx, 31, 0x2327A0u);
    ctx->pc = 0x23279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232798u;
    // 0x23279c: 0x24060c80  addiu       $a2, $zero, 0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x232798u, 0x2327A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327A0u;
label_2327a0:
    // 0x2327a0: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x2327a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x2327a4: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x2327a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x2327a8: 0x24c62698  addiu       $a2, $a2, 0x2698
    ctx->pc = 0x2327a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9880));
    // 0x2327ac: 0x2508ab40  addiu       $t0, $t0, -0x54C0
    ctx->pc = 0x2327acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945600));
    // 0x2327b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2327b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2327b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2327b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2327b8: 0xc094d4e  jal         func_253538
    ctx->pc = 0x2327B8u;
    SET_GPR_U32(ctx, 31, 0x2327C0u);
    ctx->pc = 0x2327BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327B8u;
    // 0x2327bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253538u, 0x2327B8u, 0x2327C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327C0u;
label_2327c0:
    // 0x2327c0: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x2327c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x2327c4: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2327c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2327c8: 0x24a526b8  addiu       $a1, $a1, 0x26B8
    ctx->pc = 0x2327c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9912));
    // 0x2327cc: 0x24e7ab50  addiu       $a3, $a3, -0x54B0
    ctx->pc = 0x2327ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945616));
    // 0x2327d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2327d4: 0xc094cc8  jal         func_253320
    ctx->pc = 0x2327D4u;
    SET_GPR_U32(ctx, 31, 0x2327DCu);
    ctx->pc = 0x2327D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327D4u;
    // 0x2327d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253320u, 0x2327D4u, 0x2327DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327DCu;
label_2327dc:
    // 0x2327dc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2327dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2327e0: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x2327e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x2327e4: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2327e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2327e8: 0x24e7ab60  addiu       $a3, $a3, -0x54A0
    ctx->pc = 0x2327e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945632));
    // 0x2327ec: 0x24a52678  addiu       $a1, $a1, 0x2678
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9848));
    // 0x2327f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2327f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2327f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2327f8: 0xc094cc8  jal         func_253320
    ctx->pc = 0x2327F8u;
    SET_GPR_U32(ctx, 31, 0x232800u);
    ctx->pc = 0x2327FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327F8u;
    // 0x2327fc: 0xac62ef7c  sw          $v0, -0x1084($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963068), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253320u, 0x2327F8u, 0x232800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232800u;
label_232800:
    // 0x232800: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x232800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x232804: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x232804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x232808: 0x2463ef80  addiu       $v1, $v1, -0x1080
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
    // 0x23280c: 0xaca2ef70  sw          $v0, -0x1090($a1)
    ctx->pc = 0x23280cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BEF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BEF70u, _value); } while (0);
    // 0x232810: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x232810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BEF80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BEF80u, _value); } while (0);
    // 0x232814: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x232814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x232818: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x23281c: 0xc08eb42  jal         func_23AD08
    ctx->pc = 0x23281Cu;
    SET_GPR_U32(ctx, 31, 0x232824u);
    ctx->pc = 0x232820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23281Cu;
    // 0x232820: 0xacc0ef78  sw          $zero, -0x1088($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963064), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD08u, 0x23281Cu, 0x232824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232824u;
label_232824:
    // 0x232824: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x232824u;
    SET_GPR_U32(ctx, 31, 0x23282Cu);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x232824u, 0x23282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23282Cu;
label_23282c:
    // 0x23282c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23282cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232830: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x232830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_232834:
    // 0x232834: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232838: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x232838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23283c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23283cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232840: 0x3e00008  jr          $ra
    ctx->pc = 0x232840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232840u;
        // 0x232844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232848u;
}
