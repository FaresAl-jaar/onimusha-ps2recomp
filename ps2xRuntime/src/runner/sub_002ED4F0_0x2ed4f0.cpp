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

// Function: sub_002ED4F0
// Address: 0x2ed4f0 - 0x2ed55c
void sub_002ED4F0_0x2ed4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED4F0_0x2ed4f0");
#endif

    switch (ctx->pc) {
        case 0x2ed54cu: goto label_2ed54c;
        default: break;
    }

    ctx->pc = 0x2ed4f0u;

    // 0x2ed4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed4f4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ED4F4u;
    {
        const bool branch_taken_0x2ed4f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4F4u;
        // 0x2ed4f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4f4) {
            ctx->pc = 0x2ED550u;
            goto label_2ed550;
        }
    }
    ctx->pc = 0x2ED4FCu;
    // 0x2ed4fc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2ed4fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed500: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED500u;
    {
        const bool branch_taken_0x2ed500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed500) {
            ctx->pc = 0x2ED510u;
            goto label_2ed510;
        }
    }
    ctx->pc = 0x2ED508u;
    // 0x2ed508: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2ED508u;
    {
        const bool branch_taken_0x2ed508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed508) {
            ctx->pc = 0x2ED550u;
            goto label_2ed550;
        }
    }
    ctx->pc = 0x2ED510u;
label_2ed510:
    // 0x2ed510: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x2ed510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2ed514: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x2ed514u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ed518: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ed518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ed51c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ed51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ed520: 0x2463c3a0  addiu       $v1, $v1, -0x3C60
    ctx->pc = 0x2ed520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951840));
    // 0x2ed524: 0x2442c3a8  addiu       $v0, $v0, -0x3C58
    ctx->pc = 0x2ed524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951848));
    // 0x2ed528: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2ed528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2ed52c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ed52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ed530: 0x2484c398  addiu       $a0, $a0, -0x3C68
    ctx->pc = 0x2ed530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951832));
    // 0x2ed534: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ed534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ed538: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ed538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ed53c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2ed53cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed540: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2ed540u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed544: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2ED544u;
    SET_GPR_U32(ctx, 31, 0x2ED54Cu);
    ctx->pc = 0x2ED548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED544u;
    // 0x2ed548: 0x90460000  lbu         $a2, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2ED544u, 0x2ED54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED54Cu;
label_2ed54c:
    // 0x2ed54c: 0x0  nop
    ctx->pc = 0x2ed54cu;
    // NOP
label_2ed550:
    // 0x2ed550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed554: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED554u;
        // 0x2ed558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED55Cu;
}
