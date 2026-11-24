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

// Function: sub_003102E0
// Address: 0x3102e0 - 0x310420
void sub_003102E0_0x3102e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003102E0_0x3102e0");
#endif

    ctx->pc = 0x3102e0u;

    // 0x3102e0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x3102e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3102e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3102E4u;
    {
        const bool branch_taken_0x3102e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102E4u;
        // 0x3102e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102e4) {
            ctx->pc = 0x3102F8u;
            goto label_3102f8;
        }
    }
    ctx->pc = 0x3102ECu;
    // 0x3102ec: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3102ECu;
    {
        const bool branch_taken_0x3102ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3102ec) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x3102F4u;
    // 0x3102f4: 0x0  nop
    ctx->pc = 0x3102f4u;
    // NOP
label_3102f8:
    // 0x3102f8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x3102f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3102fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3102FCu;
    {
        const bool branch_taken_0x3102fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102FCu;
        // 0x310300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102fc) {
            ctx->pc = 0x310310u;
            goto label_310310;
        }
    }
    ctx->pc = 0x310304u;
    // 0x310304: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x310304u;
    {
        const bool branch_taken_0x310304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310304) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x31030Cu;
    // 0x31030c: 0x0  nop
    ctx->pc = 0x31030cu;
    // NOP
label_310310:
    // 0x310310: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x310310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x310314: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x310314u;
    {
        const bool branch_taken_0x310314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310314u;
        // 0x310318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310314) {
            ctx->pc = 0x310328u;
            goto label_310328;
        }
    }
    ctx->pc = 0x31031Cu;
    // 0x31031c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x31031Cu;
    {
        const bool branch_taken_0x31031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31031c) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x310324u;
    // 0x310324: 0x0  nop
    ctx->pc = 0x310324u;
    // NOP
label_310328:
    // 0x310328: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x310328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31032c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31032Cu;
    {
        const bool branch_taken_0x31032c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31032Cu;
        // 0x310330: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31032c) {
            ctx->pc = 0x310340u;
            goto label_310340;
        }
    }
    ctx->pc = 0x310334u;
    // 0x310334: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x310334u;
    {
        const bool branch_taken_0x310334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310334) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x31033Cu;
    // 0x31033c: 0x0  nop
    ctx->pc = 0x31033cu;
    // NOP
label_310340:
    // 0x310340: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x310340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x310344: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x310344u;
    {
        const bool branch_taken_0x310344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310344u;
        // 0x310348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310344) {
            ctx->pc = 0x310358u;
            goto label_310358;
        }
    }
    ctx->pc = 0x31034Cu;
    // 0x31034c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x31034Cu;
    {
        const bool branch_taken_0x31034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31034c) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x310354u;
    // 0x310354: 0x0  nop
    ctx->pc = 0x310354u;
    // NOP
label_310358:
    // 0x310358: 0x28810021  slti        $at, $a0, 0x21
    ctx->pc = 0x310358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x31035c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31035Cu;
    {
        const bool branch_taken_0x31035c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31035Cu;
        // 0x310360: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31035c) {
            ctx->pc = 0x310370u;
            goto label_310370;
        }
    }
    ctx->pc = 0x310364u;
    // 0x310364: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x310364u;
    {
        const bool branch_taken_0x310364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310364) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x31036Cu;
    // 0x31036c: 0x0  nop
    ctx->pc = 0x31036cu;
    // NOP
label_310370:
    // 0x310370: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x310370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x310374: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x310374u;
    {
        const bool branch_taken_0x310374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310374u;
        // 0x310378: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310374) {
            ctx->pc = 0x310388u;
            goto label_310388;
        }
    }
    ctx->pc = 0x31037Cu;
    // 0x31037c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x31037Cu;
    {
        const bool branch_taken_0x31037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31037c) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x310384u;
    // 0x310384: 0x0  nop
    ctx->pc = 0x310384u;
    // NOP
label_310388:
    // 0x310388: 0x28810081  slti        $at, $a0, 0x81
    ctx->pc = 0x310388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x31038c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31038Cu;
    {
        const bool branch_taken_0x31038c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31038Cu;
        // 0x310390: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31038c) {
            ctx->pc = 0x3103A0u;
            goto label_3103a0;
        }
    }
    ctx->pc = 0x310394u;
    // 0x310394: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x310394u;
    {
        const bool branch_taken_0x310394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310394) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x31039Cu;
    // 0x31039c: 0x0  nop
    ctx->pc = 0x31039cu;
    // NOP
label_3103a0:
    // 0x3103a0: 0x28810101  slti        $at, $a0, 0x101
    ctx->pc = 0x3103a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x3103a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3103A4u;
    {
        const bool branch_taken_0x3103a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103A4u;
        // 0x3103a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103a4) {
            ctx->pc = 0x3103B8u;
            goto label_3103b8;
        }
    }
    ctx->pc = 0x3103ACu;
    // 0x3103ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3103ACu;
    {
        const bool branch_taken_0x3103ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3103ac) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x3103B4u;
    // 0x3103b4: 0x0  nop
    ctx->pc = 0x3103b4u;
    // NOP
label_3103b8:
    // 0x3103b8: 0x28810201  slti        $at, $a0, 0x201
    ctx->pc = 0x3103b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x3103bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3103BCu;
    {
        const bool branch_taken_0x3103bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103BCu;
        // 0x3103c0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103bc) {
            ctx->pc = 0x3103D0u;
            goto label_3103d0;
        }
    }
    ctx->pc = 0x3103C4u;
    // 0x3103c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3103C4u;
    {
        const bool branch_taken_0x3103c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3103c4) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x3103CCu;
    // 0x3103cc: 0x0  nop
    ctx->pc = 0x3103ccu;
    // NOP
label_3103d0:
    // 0x3103d0: 0x28810401  slti        $at, $a0, 0x401
    ctx->pc = 0x3103d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3103d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3103D4u;
    {
        const bool branch_taken_0x3103d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103D4u;
        // 0x3103d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103d4) {
            ctx->pc = 0x3103E8u;
            goto label_3103e8;
        }
    }
    ctx->pc = 0x3103DCu;
    // 0x3103dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3103DCu;
    {
        const bool branch_taken_0x3103dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3103dc) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x3103E4u;
    // 0x3103e4: 0x0  nop
    ctx->pc = 0x3103e4u;
    // NOP
label_3103e8:
    // 0x3103e8: 0x28810801  slti        $at, $a0, 0x801
    ctx->pc = 0x3103e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3103ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3103ECu;
    {
        const bool branch_taken_0x3103ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103ECu;
        // 0x3103f0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103ec) {
            ctx->pc = 0x310400u;
            goto label_310400;
        }
    }
    ctx->pc = 0x3103F4u;
    // 0x3103f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3103F4u;
    {
        const bool branch_taken_0x3103f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3103f4) {
            ctx->pc = 0x310418u;
            goto label_310418;
        }
    }
    ctx->pc = 0x3103FCu;
    // 0x3103fc: 0x0  nop
    ctx->pc = 0x3103fcu;
    // NOP
label_310400:
    // 0x310400: 0x28811001  slti        $at, $a0, 0x1001
    ctx->pc = 0x310400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x310404: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x310404u;
    {
        const bool branch_taken_0x310404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310404u;
        // 0x310408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310404) {
            ctx->pc = 0x310414u;
            goto label_310414;
        }
    }
    ctx->pc = 0x31040Cu;
    // 0x31040c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x31040Cu;
    {
        const bool branch_taken_0x31040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31040Cu;
        // 0x310410: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31040c) {
            ctx->pc = 0x310414u;
            goto label_310414;
        }
    }
    ctx->pc = 0x310414u;
label_310414:
    // 0x310414: 0x0  nop
    ctx->pc = 0x310414u;
    // NOP
label_310418:
    // 0x310418: 0x3e00008  jr          $ra
    ctx->pc = 0x310418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310420u;
}
