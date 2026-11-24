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

// Function: sub_002EF3A0
// Address: 0x2ef3a0 - 0x2ef860
void sub_002EF3A0_0x2ef3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF3A0_0x2ef3a0");
#endif

    switch (ctx->pc) {
        case 0x2ef3e0u: goto label_2ef3e0;
        case 0x2ef414u: goto label_2ef414;
        case 0x2ef428u: goto label_2ef428;
        case 0x2ef438u: goto label_2ef438;
        case 0x2ef450u: goto label_2ef450;
        case 0x2ef468u: goto label_2ef468;
        case 0x2ef480u: goto label_2ef480;
        case 0x2ef498u: goto label_2ef498;
        case 0x2ef4b0u: goto label_2ef4b0;
        case 0x2ef4d0u: goto label_2ef4d0;
        case 0x2ef50cu: goto label_2ef50c;
        case 0x2ef798u: goto label_2ef798;
        case 0x2ef7acu: goto label_2ef7ac;
        case 0x2ef7b8u: goto label_2ef7b8;
        case 0x2ef830u: goto label_2ef830;
        case 0x2ef844u: goto label_2ef844;
        default: break;
    }

    ctx->pc = 0x2ef3a0u;

    // 0x2ef3a0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2ef3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2ef3a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ef3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ef3a8: 0x27a201cc  addiu       $v0, $sp, 0x1CC
    ctx->pc = 0x2ef3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x2ef3ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ef3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ef3b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ef3b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ef3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef3bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ef3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef3c4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2ef3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2ef3c8: 0xc78082a0  lwc1        $f0, -0x7D60($gp)
    ctx->pc = 0x2ef3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef3cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ef3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef3d0: 0x24c68e90  addiu       $a2, $a2, -0x7170
    ctx->pc = 0x2ef3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938256));
    // 0x2ef3d4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ef3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ef3d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ef3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef3dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ef3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2ef3e0:
    // 0x2ef3e0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2ef3e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ef3e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ef3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ef3e8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2ef3e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2ef3ec: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2ef3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2ef3f0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2ef3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2ef3f4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2ef3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x2ef3f8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EF3F8u;
    {
        const bool branch_taken_0x2ef3f8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x2EF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3F8u;
        // 0x2ef3fc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3f8) {
            ctx->pc = 0x2EF3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef3e0;
        }
    }
    ctx->pc = 0x2EF400u;
    // 0x2ef400: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef40c: 0xc0538e0  jal         func_14E380
    ctx->pc = 0x2EF40Cu;
    SET_GPR_U32(ctx, 31, 0x2EF414u);
    ctx->pc = 0x2EF410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF40Cu;
    // 0x2ef410: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E380u, 0x2EF40Cu, 0x2EF414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF414u;
label_2ef414:
    // 0x2ef414: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef418: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef41c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef420: 0xc053940  jal         func_14E500
    ctx->pc = 0x2EF420u;
    SET_GPR_U32(ctx, 31, 0x2EF428u);
    ctx->pc = 0x2EF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF420u;
    // 0x2ef424: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E500u, 0x2EF420u, 0x2EF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF428u;
label_2ef428:
    // 0x2ef428: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef42c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef430: 0xc053970  jal         func_14E5C0
    ctx->pc = 0x2EF430u;
    SET_GPR_U32(ctx, 31, 0x2EF438u);
    ctx->pc = 0x2EF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF430u;
    // 0x2ef434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E5C0u, 0x2EF430u, 0x2EF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF438u;
label_2ef438:
    // 0x2ef438: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2ef438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ef43c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2ef43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ef440: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ef440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef444: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2EF444u;
    {
        const bool branch_taken_0x2ef444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF444u;
        // 0x2ef448: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef444) {
            ctx->pc = 0x2EF778u;
            goto label_2ef778;
        }
    }
    ctx->pc = 0x2EF44Cu;
    // 0x2ef44c: 0x0  nop
    ctx->pc = 0x2ef44cu;
    // NOP
label_2ef450:
    // 0x2ef450: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef454: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef458: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2ef458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ef45c: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x2ef45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2ef460: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2EF460u;
    SET_GPR_U32(ctx, 31, 0x2EF468u);
    ctx->pc = 0x2EF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF460u;
    // 0x2ef464: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2EF460u, 0x2EF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF468u;
label_2ef468:
    // 0x2ef468: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef46c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2ef46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ef470: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef474: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2ef474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2ef478: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2EF478u;
    SET_GPR_U32(ctx, 31, 0x2EF480u);
    ctx->pc = 0x2EF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF478u;
    // 0x2ef47c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2EF478u, 0x2EF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF480u;
label_2ef480:
    // 0x2ef480: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef484: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2ef484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ef488: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef48c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2ef48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2ef490: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2EF490u;
    SET_GPR_U32(ctx, 31, 0x2EF498u);
    ctx->pc = 0x2EF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF490u;
    // 0x2ef494: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2EF490u, 0x2EF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF498u;
label_2ef498:
    // 0x2ef498: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef49c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2ef49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ef4a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef4a4: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2ef4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ef4a8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2EF4A8u;
    SET_GPR_U32(ctx, 31, 0x2EF4B0u);
    ctx->pc = 0x2EF4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4A8u;
    // 0x2ef4ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2EF4A8u, 0x2EF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4B0u;
label_2ef4b0:
    // 0x2ef4b0: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef4b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ef4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ef4b8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef4bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ef4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ef4c0: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x2ef4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2ef4c4: 0x34471100  ori         $a3, $v0, 0x1100
    ctx->pc = 0x2ef4c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x2ef4c8: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x2EF4C8u;
    SET_GPR_U32(ctx, 31, 0x2EF4D0u);
    ctx->pc = 0x2EF4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4C8u;
    // 0x2ef4cc: 0x246600a0  addiu       $a2, $v1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x2EF4C8u, 0x2EF4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4D0u;
label_2ef4d0:
    // 0x2ef4d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF4D0u;
    {
        const bool branch_taken_0x2ef4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef4d0) {
            ctx->pc = 0x2EF4E0u;
            goto label_2ef4e0;
        }
    }
    ctx->pc = 0x2EF4D8u;
    // 0x2ef4d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF4D8u;
    {
        const bool branch_taken_0x2ef4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D8u;
        // 0x2ef4dc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4d8) {
            ctx->pc = 0x2EF4E8u;
            goto label_2ef4e8;
        }
    }
    ctx->pc = 0x2EF4E0u;
label_2ef4e0:
    // 0x2ef4e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef4e4: 0x0  nop
    ctx->pc = 0x2ef4e4u;
    // NOP
label_2ef4e8:
    // 0x2ef4e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2ef4e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ef4ec: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef4f0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ef4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ef4f4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef4f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ef4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ef4fc: 0x246500d0  addiu       $a1, $v1, 0xD0
    ctx->pc = 0x2ef4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2ef500: 0x34471100  ori         $a3, $v0, 0x1100
    ctx->pc = 0x2ef500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x2ef504: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x2EF504u;
    SET_GPR_U32(ctx, 31, 0x2EF50Cu);
    ctx->pc = 0x2EF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF504u;
    // 0x2ef508: 0x246600c0  addiu       $a2, $v1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x2EF504u, 0x2EF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF50Cu;
label_2ef50c:
    // 0x2ef50c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF50Cu;
    {
        const bool branch_taken_0x2ef50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef50c) {
            ctx->pc = 0x2EF520u;
            goto label_2ef520;
        }
    }
    ctx->pc = 0x2EF514u;
    // 0x2ef514: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF514u;
    {
        const bool branch_taken_0x2ef514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF514u;
        // 0x2ef518: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef514) {
            ctx->pc = 0x2EF528u;
            goto label_2ef528;
        }
    }
    ctx->pc = 0x2EF51Cu;
    // 0x2ef51c: 0x0  nop
    ctx->pc = 0x2ef51cu;
    // NOP
label_2ef520:
    // 0x2ef520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef524: 0x0  nop
    ctx->pc = 0x2ef524u;
    // NOP
label_2ef528:
    // 0x2ef528: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF528u;
    {
        const bool branch_taken_0x2ef528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF528u;
        // 0x2ef52c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef528) {
            ctx->pc = 0x2EF548u;
            goto label_2ef548;
        }
    }
    ctx->pc = 0x2EF530u;
    // 0x2ef530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF530u;
    {
        const bool branch_taken_0x2ef530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef530) {
            ctx->pc = 0x2EF548u;
            goto label_2ef548;
        }
    }
    ctx->pc = 0x2EF538u;
    // 0x2ef538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef53c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ef53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ef540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF540u;
    {
        const bool branch_taken_0x2ef540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF540u;
        // 0x2ef544: 0xa04301c8  sb          $v1, 0x1C8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef540) {
            ctx->pc = 0x2EF550u;
            goto label_2ef550;
        }
    }
    ctx->pc = 0x2EF548u;
label_2ef548:
    // 0x2ef548: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ef548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ef54c: 0xa04001c8  sb          $zero, 0x1C8($v0)
    ctx->pc = 0x2ef54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 0));
label_2ef550:
    // 0x2ef550: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF550u;
    {
        const bool branch_taken_0x2ef550 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef550) {
            ctx->pc = 0x2EF578u;
            goto label_2ef578;
        }
    }
    ctx->pc = 0x2EF558u;
    // 0x2ef558: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef55c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef560: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2ef560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef564: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ef564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef568: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x2ef568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef56c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef570: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ef570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ef574: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x2ef574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
label_2ef578:
    // 0x2ef578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef57c: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF57Cu;
    {
        const bool branch_taken_0x2ef57c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef57c) {
            ctx->pc = 0x2EF5A8u;
            goto label_2ef5a8;
        }
    }
    ctx->pc = 0x2EF584u;
    // 0x2ef584: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef588: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef58c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2ef58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef590: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ef590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef594: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x2ef594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef598: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef59c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ef59cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ef5a0: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x2ef5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x2ef5a4: 0x0  nop
    ctx->pc = 0x2ef5a4u;
    // NOP
label_2ef5a8:
    // 0x2ef5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef5ac: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF5ACu;
    {
        const bool branch_taken_0x2ef5ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef5ac) {
            ctx->pc = 0x2EF5D8u;
            goto label_2ef5d8;
        }
    }
    ctx->pc = 0x2EF5B4u;
    // 0x2ef5b4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef5b8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef5bc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2ef5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef5c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ef5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef5c4: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x2ef5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef5c8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef5cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ef5ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ef5d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ef5d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ef5d4: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x2ef5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
label_2ef5d8:
    // 0x2ef5d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ef5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef5dc: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF5DCu;
    {
        const bool branch_taken_0x2ef5dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef5dc) {
            ctx->pc = 0x2EF608u;
            goto label_2ef608;
        }
    }
    ctx->pc = 0x2EF5E4u;
    // 0x2ef5e4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x2ef5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2ef5e8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef5ec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2ef5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef5f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ef5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef5f4: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x2ef5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef5f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef5fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ef5fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ef600: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ef600u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ef604: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x2ef604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
label_2ef608:
    // 0x2ef608: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef60c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef610: 0xc44101b0  lwc1        $f1, 0x1B0($v0)
    ctx->pc = 0x2ef610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef618: 0x0  nop
    ctx->pc = 0x2ef618u;
    // NOP
    // 0x2ef61c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef620: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF620u;
    {
        const bool branch_taken_0x2ef620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef620) {
            ctx->pc = 0x2EF630u;
            goto label_2ef630;
        }
    }
    ctx->pc = 0x2EF628u;
    // 0x2ef628: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ef628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ef62c: 0xa04001c8  sb          $zero, 0x1C8($v0)
    ctx->pc = 0x2ef62cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 0));
label_2ef630:
    // 0x2ef630: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ef630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef634: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef638: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x2ef638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef63c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ef63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ef640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef644: 0x0  nop
    ctx->pc = 0x2ef644u;
    // NOP
    // 0x2ef648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef64c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF64Cu;
    {
        const bool branch_taken_0x2ef64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef64c) {
            ctx->pc = 0x2EF660u;
            goto label_2ef660;
        }
    }
    ctx->pc = 0x2EF654u;
    // 0x2ef654: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ef654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ef658: 0xa04001c8  sb          $zero, 0x1C8($v0)
    ctx->pc = 0x2ef658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef65c: 0x0  nop
    ctx->pc = 0x2ef65cu;
    // NOP
label_2ef660:
    // 0x2ef660: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x2ef660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x2ef664: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ef664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ef668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ef668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ef66c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF66Cu;
    {
        const bool branch_taken_0x2ef66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ef66c) {
            ctx->pc = 0x2EF6A0u;
            goto label_2ef6a0;
        }
    }
    ctx->pc = 0x2EF674u;
    // 0x2ef674: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2ef674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2ef678: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF678u;
    {
        const bool branch_taken_0x2ef678 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2EF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF678u;
        // 0x2ef67c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef678) {
            ctx->pc = 0x2EF68Cu;
            goto label_2ef68c;
        }
    }
    ctx->pc = 0x2EF680u;
    // 0x2ef680: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF680u;
    {
        const bool branch_taken_0x2ef680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef680) {
            ctx->pc = 0x2EF68Cu;
            goto label_2ef68c;
        }
    }
    ctx->pc = 0x2EF688u;
    // 0x2ef688: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2ef688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2ef68c:
    // 0x2ef68c: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF68Cu;
    {
        const bool branch_taken_0x2ef68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ef68c) {
            ctx->pc = 0x2EF6A0u;
            goto label_2ef6a0;
        }
    }
    ctx->pc = 0x2EF694u;
    // 0x2ef694: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ef694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ef698: 0xa04001c8  sb          $zero, 0x1C8($v0)
    ctx->pc = 0x2ef698u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef69c: 0x0  nop
    ctx->pc = 0x2ef69cu;
    // NOP
label_2ef6a0:
    // 0x2ef6a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ef6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef6a4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef6a8: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x2ef6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef6ac: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2ef6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2ef6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef6b4: 0x0  nop
    ctx->pc = 0x2ef6b4u;
    // NOP
    // 0x2ef6b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ef6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ef6bc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF6BCu;
    {
        const bool branch_taken_0x2ef6bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6BCu;
        // 0x2ef6c0: 0xe46001b0  swc1        $f0, 0x1B0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6bc) {
            ctx->pc = 0x2EF6E0u;
            goto label_2ef6e0;
        }
    }
    ctx->pc = 0x2EF6C4u;
    // 0x2ef6c4: 0xc46001b0  lwc1        $f0, 0x1B0($v1)
    ctx->pc = 0x2ef6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ef6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ef6cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef6d0: 0x0  nop
    ctx->pc = 0x2ef6d0u;
    // NOP
    // 0x2ef6d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ef6d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ef6d8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2ef6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x2ef6dc: 0x0  nop
    ctx->pc = 0x2ef6dcu;
    // NOP
label_2ef6e0:
    // 0x2ef6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef6e4: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF6E4u;
    {
        const bool branch_taken_0x2ef6e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef6e4) {
            ctx->pc = 0x2EF710u;
            goto label_2ef710;
        }
    }
    ctx->pc = 0x2EF6ECu;
    // 0x2ef6ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ef6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef6f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ef6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ef6f4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ef6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ef6f8: 0xc46001b0  lwc1        $f0, 0x1B0($v1)
    ctx->pc = 0x2ef6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef700: 0x0  nop
    ctx->pc = 0x2ef700u;
    // NOP
    // 0x2ef704: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ef704u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ef708: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2ef708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x2ef70c: 0x0  nop
    ctx->pc = 0x2ef70cu;
    // NOP
label_2ef710:
    // 0x2ef710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef714: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF714u;
    {
        const bool branch_taken_0x2ef714 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef714) {
            ctx->pc = 0x2EF740u;
            goto label_2ef740;
        }
    }
    ctx->pc = 0x2EF71Cu;
    // 0x2ef71c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ef71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef720: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ef720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ef724: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ef724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ef728: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x2ef728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef730: 0x0  nop
    ctx->pc = 0x2ef730u;
    // NOP
    // 0x2ef734: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ef734u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ef738: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ef738u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ef73c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2ef73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_2ef740:
    // 0x2ef740: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ef740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef744: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF744u;
    {
        const bool branch_taken_0x2ef744 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef744) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF74Cu;
    // 0x2ef74c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ef74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ef750: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ef750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ef754: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ef754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ef758: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x2ef758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef760: 0x0  nop
    ctx->pc = 0x2ef760u;
    // NOP
    // 0x2ef764: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ef764u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ef768: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ef768u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ef76c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2ef76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_2ef770:
    // 0x2ef770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ef774: 0x0  nop
    ctx->pc = 0x2ef774u;
    // NOP
label_2ef778:
    // 0x2ef778: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2ef778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ef77c: 0x1440ff34  bnez        $v0, . + 4 + (-0xCC << 2)
    ctx->pc = 0x2EF77Cu;
    {
        const bool branch_taken_0x2ef77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef77c) {
            ctx->pc = 0x2EF450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef450;
        }
    }
    ctx->pc = 0x2EF784u;
    // 0x2ef784: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef788: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef790: 0xc0538b4  jal         func_14E2D0
    ctx->pc = 0x2EF790u;
    SET_GPR_U32(ctx, 31, 0x2EF798u);
    ctx->pc = 0x2EF794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF790u;
    // 0x2ef794: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E2D0u, 0x2EF790u, 0x2EF798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF798u;
label_2ef798:
    // 0x2ef798: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef79c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7a4: 0xc053910  jal         func_14E440
    ctx->pc = 0x2EF7A4u;
    SET_GPR_U32(ctx, 31, 0x2EF7ACu);
    ctx->pc = 0x2EF7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7A4u;
    // 0x2ef7a8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E440u, 0x2EF7A4u, 0x2EF7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7ACu;
label_2ef7ac:
    // 0x2ef7ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EF7ACu;
    {
        const bool branch_taken_0x2ef7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7ACu;
        // 0x2ef7b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7ac) {
            ctx->pc = 0x2EF810u;
            goto label_2ef810;
        }
    }
    ctx->pc = 0x2EF7B4u;
    // 0x2ef7b4: 0x0  nop
    ctx->pc = 0x2ef7b4u;
    // NOP
label_2ef7b8:
    // 0x2ef7b8: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x2ef7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2ef7bc: 0x908201c8  lbu         $v0, 0x1C8($a0)
    ctx->pc = 0x2ef7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x2ef7c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EF7C0u;
    {
        const bool branch_taken_0x2ef7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef7c0) {
            ctx->pc = 0x2EF808u;
            goto label_2ef808;
        }
    }
    ctx->pc = 0x2EF7C8u;
    // 0x2ef7c8: 0x908201cc  lbu         $v0, 0x1CC($a0)
    ctx->pc = 0x2ef7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x2ef7cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ef7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ef7d0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ef7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ef7d4: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x2ef7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef7d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ef7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef7dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef7e0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x2ef7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef7e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef7e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef7e8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ef7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ef7ec: 0x908201cc  lbu         $v0, 0x1CC($a0)
    ctx->pc = 0x2ef7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x2ef7f0: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x2ef7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef7f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ef7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef7f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ef7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ef7fc: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2ef7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef800: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef804: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ef804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_2ef808:
    // 0x2ef808: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ef808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ef80c: 0x0  nop
    ctx->pc = 0x2ef80cu;
    // NOP
label_2ef810:
    // 0x2ef810: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2ef810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ef814: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2EF814u;
    {
        const bool branch_taken_0x2ef814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef814) {
            ctx->pc = 0x2EF7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef7b8;
        }
    }
    ctx->pc = 0x2EF81Cu;
    // 0x2ef81c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef828: 0xc0538c4  jal         func_14E310
    ctx->pc = 0x2EF828u;
    SET_GPR_U32(ctx, 31, 0x2EF830u);
    ctx->pc = 0x2EF82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF828u;
    // 0x2ef82c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E310u, 0x2EF828u, 0x2EF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF830u;
label_2ef830:
    // 0x2ef830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ef830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef834: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef83c: 0xc053920  jal         func_14E480
    ctx->pc = 0x2EF83Cu;
    SET_GPR_U32(ctx, 31, 0x2EF844u);
    ctx->pc = 0x2EF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF83Cu;
    // 0x2ef840: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E480u, 0x2EF83Cu, 0x2EF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF844u;
label_2ef844:
    // 0x2ef844: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ef844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef848: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef84c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef858: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF858u;
        // 0x2ef85c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF860u;
}
