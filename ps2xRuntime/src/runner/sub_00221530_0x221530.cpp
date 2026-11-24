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

// Function: sub_00221530
// Address: 0x221530 - 0x2215bc
void sub_00221530_0x221530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221530_0x221530");
#endif

    switch (ctx->pc) {
        case 0x221554u: goto label_221554;
        case 0x2215a0u: goto label_2215a0;
        default: break;
    }

    ctx->pc = 0x221530u;

    // 0x221530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221534: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x221534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22153c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22153cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22154c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x22154Cu;
    SET_GPR_U32(ctx, 31, 0x221554u);
    ctx->pc = 0x221550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22154Cu;
    // 0x221550: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x22154Cu, 0x221554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221554u;
label_221554:
    // 0x221554: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x221554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x221558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221558u;
    {
        const bool branch_taken_0x221558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221558u;
        // 0x22155c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221558) {
            ctx->pc = 0x221578u;
            goto label_221578;
        }
    }
    ctx->pc = 0x221560u;
    // 0x221560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221564: 0x34a50118  ori         $a1, $a1, 0x118
    ctx->pc = 0x221564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)280);
    // 0x221568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22156c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22156cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221570: 0x80848e0  j           func_212380
    ctx->pc = 0x221570u;
    ctx->pc = 0x221574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221570u;
    // 0x221574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x221578u;
label_221578:
    // 0x221578: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x221578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x22157c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22157Cu;
    {
        const bool branch_taken_0x22157c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22157Cu;
        // 0x221580: 0x26040d30  addiu       $a0, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22157c) {
            ctx->pc = 0x2215A8u;
            goto label_2215a8;
        }
    }
    ctx->pc = 0x221584u;
    // 0x221584: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x221584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221588: 0x8c8502ac  lw          $a1, 0x2AC($a0)
    ctx->pc = 0x221588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 684)));
    // 0x22158c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22158cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x221590: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x221590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x221594: 0x8c848c70  lw          $a0, -0x7390($a0)
    ctx->pc = 0x221594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937712)));
    // 0x221598: 0xc080568  jal         func_2015A0
    ctx->pc = 0x221598u;
    SET_GPR_U32(ctx, 31, 0x2215A0u);
    ctx->pc = 0x22159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221598u;
    // 0x22159c: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x221598u, 0x2215A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215A0u;
label_2215a0:
    // 0x2215a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2215a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2215a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2215a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2215a8:
    // 0x2215a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2215a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2215ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2215acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2215b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2215b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2215b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2215B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2215B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215B4u;
        // 0x2215b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2215B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2215BCu;
}
