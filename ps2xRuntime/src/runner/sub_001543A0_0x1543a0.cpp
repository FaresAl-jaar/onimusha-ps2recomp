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

// Function: sub_001543A0
// Address: 0x1543a0 - 0x154634
void sub_001543A0_0x1543a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001543A0_0x1543a0");
#endif

    switch (ctx->pc) {
        case 0x1543d8u: goto label_1543d8;
        case 0x154438u: goto label_154438;
        case 0x15444cu: goto label_15444c;
        case 0x154468u: goto label_154468;
        case 0x1544e8u: goto label_1544e8;
        case 0x154520u: goto label_154520;
        case 0x154558u: goto label_154558;
        case 0x1545a8u: goto label_1545a8;
        case 0x1545c8u: goto label_1545c8;
        default: break;
    }

    ctx->pc = 0x1543a0u;

    // 0x1543a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1543a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1543a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1543a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1543a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1543a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1543ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1543acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1543b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1543b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1543b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1543b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1543b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1543bc: 0x8f8485c0  lw          $a0, -0x7A40($gp)
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x1543c0: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x1543c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1543c4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1543C4u;
    {
        const bool branch_taken_0x1543c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543C4u;
        // 0x1543c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543c4) {
            ctx->pc = 0x1544C8u;
            goto label_1544c8;
        }
    }
    ctx->pc = 0x1543CCu;
    // 0x1543cc: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1543ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1543d0: 0x24a5eeb0  addiu       $a1, $a1, -0x1150
    ctx->pc = 0x1543d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
    // 0x1543d4: 0x0  nop
    ctx->pc = 0x1543d4u;
    // NOP
label_1543d8:
    // 0x1543d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1543d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1543dc: 0x16630036  bne         $s3, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1543DCu;
    {
        const bool branch_taken_0x1543dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x1543dc) {
            ctx->pc = 0x1544B8u;
            goto label_1544b8;
        }
    }
    ctx->pc = 0x1543E4u;
    // 0x1543e4: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x1543e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1543e8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1543e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1543ec: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1543ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1543f0: 0x2463eeb0  addiu       $v1, $v1, -0x1150
    ctx->pc = 0x1543f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962864));
    // 0x1543f4: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x1543f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1543f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1543f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1543fc: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x154400: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x154400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154404: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x154404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x154408: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x154408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x15440c: 0x2463eeb4  addiu       $v1, $v1, -0x114C
    ctx->pc = 0x15440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962868));
    // 0x154410: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x154414: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x154414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x154418: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x154418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15441c: 0x2463eeb8  addiu       $v1, $v1, -0x1148
    ctx->pc = 0x15441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962872));
    // 0x154420: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x154424: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154428: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154428u;
    {
        const bool branch_taken_0x154428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154428) {
            ctx->pc = 0x154450u;
            goto label_154450;
        }
    }
    ctx->pc = 0x154430u;
    // 0x154430: 0xc08c39e  jal         func_230E78
    ctx->pc = 0x154430u;
    SET_GPR_U32(ctx, 31, 0x154438u);
    ctx->pc = 0x230E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230E78u, 0x154430u, 0x154438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154438u;
label_154438:
    // 0x154438: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x154438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15443c: 0x2442eeb8  addiu       $v0, $v0, -0x1148
    ctx->pc = 0x15443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962872));
    // 0x154440: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x154440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x154444: 0xc054bf4  jal         func_152FD0
    ctx->pc = 0x154444u;
    SET_GPR_U32(ctx, 31, 0x15444Cu);
    ctx->pc = 0x154448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154444u;
    // 0x154448: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FD0u, 0x154444u, 0x15444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15444Cu;
label_15444c:
    // 0x15444c: 0x0  nop
    ctx->pc = 0x15444cu;
    // NOP
label_154450:
    // 0x154450: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x154454: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x154454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154458: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x154458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x15445c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x15445Cu;
    {
        const bool branch_taken_0x15445c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15445c) {
            ctx->pc = 0x1544A8u;
            goto label_1544a8;
        }
    }
    ctx->pc = 0x154464u;
    // 0x154464: 0x0  nop
    ctx->pc = 0x154464u;
    // NOP
label_154468:
    // 0x154468: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x154468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15446c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x154470: 0x245182b  sltu        $v1, $s2, $a1
    ctx->pc = 0x154470u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x154474: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x154474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x154478: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x154478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15447c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x15447cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x154480: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x154480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x154484: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x154484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x154488: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x15448c: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x15448cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x154490: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x154490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x154494: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x154494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x154498: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15449c: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x15449cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1544a0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1544A0u;
    {
        const bool branch_taken_0x1544a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1544A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544A0u;
        // 0x1544a4: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544a0) {
            ctx->pc = 0x154468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154468;
        }
    }
    ctx->pc = 0x1544A8u;
label_1544a8:
    // 0x1544a8: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x1544a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x1544ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1544b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1544B0u;
    {
        const bool branch_taken_0x1544b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544B0u;
        // 0x1544b4: 0xaf8385c0  sw          $v1, -0x7A40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544b0) {
            ctx->pc = 0x1544C8u;
            goto label_1544c8;
        }
    }
    ctx->pc = 0x1544B8u;
label_1544b8:
    // 0x1544b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1544b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1544bc: 0x244182b  sltu        $v1, $s2, $a0
    ctx->pc = 0x1544bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1544c0: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1544C0u;
    {
        const bool branch_taken_0x1544c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1544C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544C0u;
        // 0x1544c4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544c0) {
            ctx->pc = 0x1543D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1543d8;
        }
    }
    ctx->pc = 0x1544C8u;
label_1544c8:
    // 0x1544c8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1544c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1544cc: 0x8c2aac74  lw          $t2, -0x538C($at)
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x40AC74u));
    // 0x1544d0: 0x11400031  beqz        $t2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1544D0u;
    {
        const bool branch_taken_0x1544d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544D0u;
        // 0x1544d4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544d0) {
            ctx->pc = 0x154598u;
            goto label_154598;
        }
    }
    ctx->pc = 0x1544D8u;
    // 0x1544d8: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x1544d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1544dc: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1544dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1544e0: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1544e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1544e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1544e8:
    // 0x1544e8: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x1544e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1544ec: 0x14880044  bne         $a0, $t0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1544ECu;
    {
        const bool branch_taken_0x1544ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x1544ec) {
            ctx->pc = 0x154600u;
            goto label_154600;
        }
    }
    ctx->pc = 0x1544F4u;
    // 0x1544f4: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x1544f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x1544f8: 0x14870041  bne         $a0, $a3, . + 4 + (0x41 << 2)
    ctx->pc = 0x1544F8u;
    {
        const bool branch_taken_0x1544f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x1544f8) {
            ctx->pc = 0x154600u;
            goto label_154600;
        }
    }
    ctx->pc = 0x154500u;
    // 0x154500: 0x91440002  lbu         $a0, 0x2($t2)
    ctx->pc = 0x154500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x154504: 0x1486003e  bne         $a0, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x154504u;
    {
        const bool branch_taken_0x154504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x154504) {
            ctx->pc = 0x154600u;
            goto label_154600;
        }
    }
    ctx->pc = 0x15450Cu;
    // 0x15450c: 0x91440003  lbu         $a0, 0x3($t2)
    ctx->pc = 0x15450cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x154510: 0x10850019  beq         $a0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x154510u;
    {
        const bool branch_taken_0x154510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x154510) {
            ctx->pc = 0x154578u;
            goto label_154578;
        }
    }
    ctx->pc = 0x154518u;
    // 0x154518: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x154518u;
    {
        const bool branch_taken_0x154518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154518) {
            ctx->pc = 0x154600u;
            goto label_154600;
        }
    }
    ctx->pc = 0x154520u;
label_154520:
    // 0x154520: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x154520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x154524: 0x1488000a  bne         $a0, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x154524u;
    {
        const bool branch_taken_0x154524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x154524) {
            ctx->pc = 0x154550u;
            goto label_154550;
        }
    }
    ctx->pc = 0x15452Cu;
    // 0x15452c: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x15452cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x154530: 0x14870007  bne         $a0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x154530u;
    {
        const bool branch_taken_0x154530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x154530) {
            ctx->pc = 0x154550u;
            goto label_154550;
        }
    }
    ctx->pc = 0x154538u;
    // 0x154538: 0x91440002  lbu         $a0, 0x2($t2)
    ctx->pc = 0x154538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x15453c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15453Cu;
    {
        const bool branch_taken_0x15453c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x15453c) {
            ctx->pc = 0x154550u;
            goto label_154550;
        }
    }
    ctx->pc = 0x154544u;
    // 0x154544: 0x91440003  lbu         $a0, 0x3($t2)
    ctx->pc = 0x154544u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x154548: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x154548u;
    {
        const bool branch_taken_0x154548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x154548) {
            ctx->pc = 0x154568u;
            goto label_154568;
        }
    }
    ctx->pc = 0x154550u;
label_154550:
    // 0x154550: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x154550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x154554: 0x0  nop
    ctx->pc = 0x154554u;
    // NOP
label_154558:
    // 0x154558: 0x149202b  sltu        $a0, $t2, $t1
    ctx->pc = 0x154558u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x15455c: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15455Cu;
    {
        const bool branch_taken_0x15455c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15455c) {
            ctx->pc = 0x154520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154520;
        }
    }
    ctx->pc = 0x154564u;
    // 0x154564: 0x0  nop
    ctx->pc = 0x154564u;
    // NOP
label_154568:
    // 0x154568: 0x149082b  sltu        $at, $t2, $t1
    ctx->pc = 0x154568u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x15456c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15456Cu;
    {
        const bool branch_taken_0x15456c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15456c) {
            ctx->pc = 0x154598u;
            goto label_154598;
        }
    }
    ctx->pc = 0x154574u;
    // 0x154574: 0x0  nop
    ctx->pc = 0x154574u;
    // NOP
label_154578:
    // 0x154578: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x15457c: 0x14930002  bne         $a0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x15457Cu;
    {
        const bool branch_taken_0x15457c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x15457c) {
            ctx->pc = 0x154588u;
            goto label_154588;
        }
    }
    ctx->pc = 0x154584u;
    // 0x154584: 0xad43000c  sw          $v1, 0xC($t2)
    ctx->pc = 0x154584u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
label_154588:
    // 0x154588: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x154588u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x15458c: 0x1540ffd6  bnez        $t2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15458Cu;
    {
        const bool branch_taken_0x15458c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x15458c) {
            ctx->pc = 0x1544E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1544e8;
        }
    }
    ctx->pc = 0x154594u;
    // 0x154594: 0x0  nop
    ctx->pc = 0x154594u;
    // NOP
label_154598:
    // 0x154598: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x154598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x15459c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15459cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545a0: 0x24c6e610  addiu       $a2, $a2, -0x19F0
    ctx->pc = 0x1545a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960656));
    // 0x1545a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1545a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1545a8:
    // 0x1545a8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1545a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1545ac: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1545ACu;
    {
        const bool branch_taken_0x1545ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1545ac) {
            ctx->pc = 0x1545E8u;
            goto label_1545e8;
        }
    }
    ctx->pc = 0x1545B4u;
    // 0x1545b4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1545b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1545b8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1545B8u;
    {
        const bool branch_taken_0x1545b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1545b8) {
            ctx->pc = 0x1545E8u;
            goto label_1545e8;
        }
    }
    ctx->pc = 0x1545C0u;
    // 0x1545c0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1545C0u;
    {
        const bool branch_taken_0x1545c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1545c0) {
            ctx->pc = 0x1545E8u;
            goto label_1545e8;
        }
    }
    ctx->pc = 0x1545C8u;
label_1545c8:
    // 0x1545c8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1545c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1545cc: 0x14730002  bne         $v1, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1545CCu;
    {
        const bool branch_taken_0x1545cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1545cc) {
            ctx->pc = 0x1545D8u;
            goto label_1545d8;
        }
    }
    ctx->pc = 0x1545D4u;
    // 0x1545d4: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1545d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_1545d8:
    // 0x1545d8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1545dc: 0x0  nop
    ctx->pc = 0x1545dcu;
    // NOP
    // 0x1545e0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1545E0u;
    {
        const bool branch_taken_0x1545e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1545e0) {
            ctx->pc = 0x1545C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1545c8;
        }
    }
    ctx->pc = 0x1545E8u;
label_1545e8:
    // 0x1545e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1545ec: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x1545ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1545f0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1545F0u;
    {
        const bool branch_taken_0x1545f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1545F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F0u;
        // 0x1545f4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f0) {
            ctx->pc = 0x1545A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1545a8;
        }
    }
    ctx->pc = 0x1545F8u;
    // 0x1545f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1545F8u;
    {
        const bool branch_taken_0x1545f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1545f8) {
            ctx->pc = 0x154618u;
            goto label_154618;
        }
    }
    ctx->pc = 0x154600u;
label_154600:
    // 0x154600: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x154600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x154604: 0x8c29ac78  lw          $t1, -0x5388($at)
    ctx->pc = 0x154604u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x40AC78u));
    // 0x154608: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x15460c: 0x8c24ac74  lw          $a0, -0x538C($at)
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40AC74u));
    // 0x154610: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x154610u;
    {
        const bool branch_taken_0x154610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154610u;
        // 0x154614: 0x894821  addu        $t1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154610) {
            ctx->pc = 0x154558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154558;
        }
    }
    ctx->pc = 0x154618u;
label_154618:
    // 0x154618: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x154618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15461c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15461cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15462c: 0x3e00008  jr          $ra
    ctx->pc = 0x15462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15462Cu;
        // 0x154630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154634u;
}
