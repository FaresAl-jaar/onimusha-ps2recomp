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

// Function: sub_0036B3E0
// Address: 0x36b3e0 - 0x36b54c
void sub_0036B3E0_0x36b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B3E0_0x36b3e0");
#endif

    switch (ctx->pc) {
        case 0x36b428u: goto label_36b428;
        case 0x36b458u: goto label_36b458;
        case 0x36b478u: goto label_36b478;
        case 0x36b480u: goto label_36b480;
        case 0x36b4a0u: goto label_36b4a0;
        case 0x36b4e0u: goto label_36b4e0;
        case 0x36b4e8u: goto label_36b4e8;
        case 0x36b508u: goto label_36b508;
        default: break;
    }

    ctx->pc = 0x36b3e0u;

    // 0x36b3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36b3e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36b3e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36b3ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36b3f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36b3f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36b3f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36b3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3fc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x36b3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b400: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x36b400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x36b404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36b404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b408: 0xa7828bf4  sh          $v0, -0x740C($gp)
    ctx->pc = 0x36b408u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937588), (uint16_t)GPR_U32(ctx, 2));
    // 0x36b40c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x36b40cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36b410: 0x97828bf4  lhu         $v0, -0x740C($gp)
    ctx->pc = 0x36b410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x36b414: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x36b414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x36b418: 0xa7838bf8  sh          $v1, -0x7408($gp)
    ctx->pc = 0x36b418u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937592), (uint16_t)GPR_U32(ctx, 3));
    // 0x36b41c: 0x2484e6c0  addiu       $a0, $a0, -0x1940
    ctx->pc = 0x36b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960832));
    // 0x36b420: 0xc049522  jal         func_125488
    ctx->pc = 0x36B420u;
    SET_GPR_U32(ctx, 31, 0x36B428u);
    ctx->pc = 0x36B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B420u;
    // 0x36b424: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x36B420u, 0x36B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B428u;
label_36b428:
    // 0x36b428: 0x97858bf4  lhu         $a1, -0x740C($gp)
    ctx->pc = 0x36b428u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x36b42c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x36b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x36b430: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x36b430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x36b434: 0x248406c0  addiu       $a0, $a0, 0x6C0
    ctx->pc = 0x36b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    // 0x36b438: 0x97828bf8  lhu         $v0, -0x7408($gp)
    ctx->pc = 0x36b438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937592)));
    // 0x36b43c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x36b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x36b440: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x36b440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x36b444: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x36b444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x36b448: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x36b448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x36b44c: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x36b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x36b450: 0xc049522  jal         func_125488
    ctx->pc = 0x36B450u;
    SET_GPR_U32(ctx, 31, 0x36B458u);
    ctx->pc = 0x36B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B450u;
    // 0x36b454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x36B450u, 0x36B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B458u;
label_36b458:
    // 0x36b458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b45c: 0xa3838bfc  sb          $v1, -0x7404($gp)
    ctx->pc = 0x36b45cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937596), (uint8_t)GPR_U32(ctx, 3));
    // 0x36b460: 0x97838bf4  lhu         $v1, -0x740C($gp)
    ctx->pc = 0x36b460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x36b464: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x36b464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36b468: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x36B468u;
    {
        const bool branch_taken_0x36b468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B468u;
        // 0x36b46c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b468) {
            ctx->pc = 0x36B4C8u;
            goto label_36b4c8;
        }
    }
    ctx->pc = 0x36B470u;
    // 0x36b470: 0x3c110092  lui         $s1, 0x92
    ctx->pc = 0x36b470u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)146 << 16));
    // 0x36b474: 0x2631e6c0  addiu       $s1, $s1, -0x1940
    ctx->pc = 0x36b474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960832));
label_36b478:
    // 0x36b478: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36b478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b47c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x36b47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b480:
    // 0x36b480: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x36b480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x36b484: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36b488: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36B488u;
    {
        const bool branch_taken_0x36b488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B488u;
        // 0x36b48c: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b488) {
            ctx->pc = 0x36B4A0u;
            goto label_36b4a0;
        }
    }
    ctx->pc = 0x36B490u;
    // 0x36b490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36b490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b494: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36b494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36b498: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x36B498u;
    SET_GPR_U32(ctx, 31, 0x36B4A0u);
    ctx->pc = 0x36B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B498u;
    // 0x36b49c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x36B498u, 0x36B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B4A0u;
label_36b4a0:
    // 0x36b4a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36b4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36b4a4: 0x2a43000f  slti        $v1, $s2, 0xF
    ctx->pc = 0x36b4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x36b4a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x36B4A8u;
    {
        const bool branch_taken_0x36b4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4A8u;
        // 0x36b4ac: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4a8) {
            ctx->pc = 0x36B480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b480;
        }
    }
    ctx->pc = 0x36B4B0u;
    // 0x36b4b0: 0x97838bf4  lhu         $v1, -0x740C($gp)
    ctx->pc = 0x36b4b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x36b4b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36b4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x36b4b8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x36b4b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36b4bc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x36B4BCu;
    {
        const bool branch_taken_0x36b4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4BCu;
        // 0x36b4c0: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4bc) {
            ctx->pc = 0x36B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b478;
        }
    }
    ctx->pc = 0x36B4C4u;
    // 0x36b4c4: 0x0  nop
    ctx->pc = 0x36b4c4u;
    // NOP
label_36b4c8:
    // 0x36b4c8: 0x97838bf8  lhu         $v1, -0x7408($gp)
    ctx->pc = 0x36b4c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937592)));
    // 0x36b4cc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x36b4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36b4d0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x36B4D0u;
    {
        const bool branch_taken_0x36b4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4D0u;
        // 0x36b4d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4d0) {
            ctx->pc = 0x36B530u;
            goto label_36b530;
        }
    }
    ctx->pc = 0x36B4D8u;
    // 0x36b4d8: 0x3c110092  lui         $s1, 0x92
    ctx->pc = 0x36b4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)146 << 16));
    // 0x36b4dc: 0x263106c0  addiu       $s1, $s1, 0x6C0
    ctx->pc = 0x36b4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_36b4e0:
    // 0x36b4e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36b4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b4e4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x36b4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b4e8:
    // 0x36b4e8: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x36b4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x36b4ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36b4f0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36B4F0u;
    {
        const bool branch_taken_0x36b4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4F0u;
        // 0x36b4f4: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4f0) {
            ctx->pc = 0x36B508u;
            goto label_36b508;
        }
    }
    ctx->pc = 0x36B4F8u;
    // 0x36b4f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36b4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b4fc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36b500: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x36B500u;
    SET_GPR_U32(ctx, 31, 0x36B508u);
    ctx->pc = 0x36B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B500u;
    // 0x36b504: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x36B500u, 0x36B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B508u;
label_36b508:
    // 0x36b508: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36b508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36b50c: 0x2a43001f  slti        $v1, $s2, 0x1F
    ctx->pc = 0x36b50cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36b510: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x36B510u;
    {
        const bool branch_taken_0x36b510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B510u;
        // 0x36b514: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b510) {
            ctx->pc = 0x36B4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b4e8;
        }
    }
    ctx->pc = 0x36B518u;
    // 0x36b518: 0x97838bf8  lhu         $v1, -0x7408($gp)
    ctx->pc = 0x36b518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937592)));
    // 0x36b51c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36b51cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x36b520: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x36b520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36b524: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x36B524u;
    {
        const bool branch_taken_0x36b524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B524u;
        // 0x36b528: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b524) {
            ctx->pc = 0x36B4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b4e0;
        }
    }
    ctx->pc = 0x36B52Cu;
    // 0x36b52c: 0x0  nop
    ctx->pc = 0x36b52cu;
    // NOP
label_36b530:
    // 0x36b530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36b530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b534: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36b534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36b538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36b53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b544: 0x3e00008  jr          $ra
    ctx->pc = 0x36B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B544u;
        // 0x36b548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B54Cu;
}
