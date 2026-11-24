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

// Function: sub_0017A8E0
// Address: 0x17a8e0 - 0x17aa00
void sub_0017A8E0_0x17a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A8E0_0x17a8e0");
#endif

    switch (ctx->pc) {
        case 0x17a948u: goto label_17a948;
        case 0x17a974u: goto label_17a974;
        case 0x17a980u: goto label_17a980;
        case 0x17a9a8u: goto label_17a9a8;
        default: break;
    }

    ctx->pc = 0x17a8e0u;

    // 0x17a8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a8e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a8f0: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x17a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x17a8f4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x17A8F4u;
    {
        const bool branch_taken_0x17a8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8F4u;
        // 0x17a8f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8f4) {
            ctx->pc = 0x17A9A0u;
            goto label_17a9a0;
        }
    }
    ctx->pc = 0x17A8FCu;
    // 0x17a8fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A8FCu;
    {
        const bool branch_taken_0x17a8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a8fc) {
            ctx->pc = 0x17A910u;
            goto label_17a910;
        }
    }
    ctx->pc = 0x17A904u;
    // 0x17a904: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17A904u;
    {
        const bool branch_taken_0x17a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a904) {
            ctx->pc = 0x17A9E8u;
            goto label_17a9e8;
        }
    }
    ctx->pc = 0x17A90Cu;
    // 0x17a90c: 0x0  nop
    ctx->pc = 0x17a90cu;
    // NOP
label_17a910:
    // 0x17a910: 0x8e032c9c  lw          $v1, 0x2C9C($s0)
    ctx->pc = 0x17a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11420)));
    // 0x17a914: 0x2c614001  sltiu       $at, $v1, 0x4001
    ctx->pc = 0x17a914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x17a918: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A918u;
    {
        const bool branch_taken_0x17a918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a918) {
            ctx->pc = 0x17A930u;
            goto label_17a930;
        }
    }
    ctx->pc = 0x17A920u;
    // 0x17a920: 0xae032cdc  sw          $v1, 0x2CDC($s0)
    ctx->pc = 0x17a920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11484), GPR_U32(ctx, 3));
    // 0x17a924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A924u;
    {
        const bool branch_taken_0x17a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A924u;
        // 0x17a928: 0xae022cd8  sw          $v0, 0x2CD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a924) {
            ctx->pc = 0x17A948u;
            goto label_17a948;
        }
    }
    ctx->pc = 0x17A92Cu;
    // 0x17a92c: 0x0  nop
    ctx->pc = 0x17a92cu;
    // NOP
label_17a930:
    // 0x17a930: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x17a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17a934: 0xae022cdc  sw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17a934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11484), GPR_U32(ctx, 2));
    // 0x17a938: 0x8e022c9c  lw          $v0, 0x2C9C($s0)
    ctx->pc = 0x17a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11420)));
    // 0x17a93c: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x17a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x17a940: 0xae022c9c  sw          $v0, 0x2C9C($s0)
    ctx->pc = 0x17a940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11420), GPR_U32(ctx, 2));
    // 0x17a944: 0xae002cd8  sw          $zero, 0x2CD8($s0)
    ctx->pc = 0x17a944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11480), GPR_U32(ctx, 0));
label_17a948:
    // 0x17a948: 0x8e022ca8  lw          $v0, 0x2CA8($s0)
    ctx->pc = 0x17a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11432)));
    // 0x17a94c: 0xae020900  sw          $v0, 0x900($s0)
    ctx->pc = 0x17a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 2));
    // 0x17a950: 0x8e022ca0  lw          $v0, 0x2CA0($s0)
    ctx->pc = 0x17a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11424)));
    // 0x17a954: 0xae020904  sw          $v0, 0x904($s0)
    ctx->pc = 0x17a954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2308), GPR_U32(ctx, 2));
    // 0x17a958: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17a95c: 0xae020908  sw          $v0, 0x908($s0)
    ctx->pc = 0x17a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2312), GPR_U32(ctx, 2));
    // 0x17a960: 0xae00090c  sw          $zero, 0x90C($s0)
    ctx->pc = 0x17a960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2316), GPR_U32(ctx, 0));
    // 0x17a964: 0x8e042ca8  lw          $a0, 0x2CA8($s0)
    ctx->pc = 0x17a964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11432)));
    // 0x17a968: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17a96c: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x17A96Cu;
    SET_GPR_U32(ctx, 31, 0x17A974u);
    ctx->pc = 0x17A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A96Cu;
    // 0x17a970: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x17A96Cu, 0x17A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A974u;
label_17a974:
    // 0x17a974: 0x26040900  addiu       $a0, $s0, 0x900
    ctx->pc = 0x17a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
    // 0x17a978: 0xc0438e8  jal         func_10E3A0
    ctx->pc = 0x17A978u;
    SET_GPR_U32(ctx, 31, 0x17A980u);
    ctx->pc = 0x17A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A978u;
    // 0x17a97c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3A0u, 0x17A978u, 0x17A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A980u;
label_17a980:
    // 0x17a980: 0xae022cd4  sw          $v0, 0x2CD4($s0)
    ctx->pc = 0x17a980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11476), GPR_U32(ctx, 2));
    // 0x17a984: 0x8e022cd4  lw          $v0, 0x2CD4($s0)
    ctx->pc = 0x17a984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    // 0x17a988: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17A988u;
    {
        const bool branch_taken_0x17a988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a988) {
            ctx->pc = 0x17A948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a948;
        }
    }
    ctx->pc = 0x17A990u;
    // 0x17a990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a994: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17A994u;
    {
        const bool branch_taken_0x17a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A994u;
        // 0x17a998: 0xae022cd0  sw          $v0, 0x2CD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a994) {
            ctx->pc = 0x17A9E8u;
            goto label_17a9e8;
        }
    }
    ctx->pc = 0x17A99Cu;
    // 0x17a99c: 0x0  nop
    ctx->pc = 0x17a99cu;
    // NOP
label_17a9a0:
    // 0x17a9a0: 0xc0438e0  jal         func_10E380
    ctx->pc = 0x17A9A0u;
    SET_GPR_U32(ctx, 31, 0x17A9A8u);
    ctx->pc = 0x17A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A9A0u;
    // 0x17a9a4: 0x8e042cd4  lw          $a0, 0x2CD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E380u, 0x17A9A0u, 0x17A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A9A8u;
label_17a9a8:
    // 0x17a9a8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A9A8u;
    {
        const bool branch_taken_0x17a9a8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x17a9a8) {
            ctx->pc = 0x17A9B8u;
            goto label_17a9b8;
        }
    }
    ctx->pc = 0x17A9B0u;
    // 0x17a9b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17A9B0u;
    {
        const bool branch_taken_0x17a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9B0u;
        // 0x17a9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9b0) {
            ctx->pc = 0x17A9F0u;
            goto label_17a9f0;
        }
    }
    ctx->pc = 0x17A9B8u;
label_17a9b8:
    // 0x17a9b8: 0x8e032ca8  lw          $v1, 0x2CA8($s0)
    ctx->pc = 0x17a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11432)));
    // 0x17a9bc: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17a9c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a9c4: 0xae022ca8  sw          $v0, 0x2CA8($s0)
    ctx->pc = 0x17a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11432), GPR_U32(ctx, 2));
    // 0x17a9c8: 0x8e032ca0  lw          $v1, 0x2CA0($s0)
    ctx->pc = 0x17a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11424)));
    // 0x17a9cc: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17a9d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a9d4: 0xae022ca0  sw          $v0, 0x2CA0($s0)
    ctx->pc = 0x17a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11424), GPR_U32(ctx, 2));
    // 0x17a9d8: 0xae002cd0  sw          $zero, 0x2CD0($s0)
    ctx->pc = 0x17a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11472), GPR_U32(ctx, 0));
    // 0x17a9dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A9DCu;
    {
        const bool branch_taken_0x17a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9DCu;
        // 0x17a9e0: 0x8e022cd8  lw          $v0, 0x2CD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9dc) {
            ctx->pc = 0x17A9F0u;
            goto label_17a9f0;
        }
    }
    ctx->pc = 0x17A9E4u;
    // 0x17a9e4: 0x0  nop
    ctx->pc = 0x17a9e4u;
    // NOP
label_17a9e8:
    // 0x17a9e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9ec: 0x0  nop
    ctx->pc = 0x17a9ecu;
    // NOP
label_17a9f0:
    // 0x17a9f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9F8u;
        // 0x17a9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA00u;
}
