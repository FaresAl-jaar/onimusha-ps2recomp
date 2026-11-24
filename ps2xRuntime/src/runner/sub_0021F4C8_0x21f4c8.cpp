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

// Function: sub_0021F4C8
// Address: 0x21f4c8 - 0x21f54c
void sub_0021F4C8_0x21f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F4C8_0x21f4c8");
#endif

    switch (ctx->pc) {
        case 0x21f4ecu: goto label_21f4ec;
        case 0x21f530u: goto label_21f530;
        default: break;
    }

    ctx->pc = 0x21f4c8u;

    // 0x21f4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f4d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f4d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21f4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f4e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21f4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21f4e4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F4E4u;
    SET_GPR_U32(ctx, 31, 0x21F4ECu);
    ctx->pc = 0x21F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4E4u;
    // 0x21f4e8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F4E4u, 0x21F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4ECu;
label_21f4ec:
    // 0x21f4ec: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f4f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F4F4u;
    {
        const bool branch_taken_0x21f4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4F4u;
        // 0x21f4f8: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4f4) {
            ctx->pc = 0x21F518u;
            goto label_21f518;
        }
    }
    ctx->pc = 0x21F4FCu;
    // 0x21f4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f504: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f508: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f50c: 0x80848e0  j           func_212380
    ctx->pc = 0x21F50Cu;
    ctx->pc = 0x21F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F50Cu;
    // 0x21f510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21F514u;
    // 0x21f514: 0x0  nop
    ctx->pc = 0x21f514u;
    // NOP
label_21f518:
    // 0x21f518: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x21f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21f51c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F51Cu;
    {
        const bool branch_taken_0x21f51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F51Cu;
        // 0x21f520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f51c) {
            ctx->pc = 0x21F534u;
            goto label_21f534;
        }
    }
    ctx->pc = 0x21F524u;
    // 0x21f524: 0xac710dcc  sw          $s1, 0xDCC($v1)
    ctx->pc = 0x21f524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3532), GPR_U32(ctx, 17));
    // 0x21f528: 0xc087dd6  jal         func_21F758
    ctx->pc = 0x21F528u;
    SET_GPR_U32(ctx, 31, 0x21F530u);
    ctx->pc = 0x21F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F528u;
    // 0x21f52c: 0xac720dc8  sw          $s2, 0xDC8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 3528), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F758u, 0x21F528u, 0x21F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F530u;
label_21f530:
    // 0x21f530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f534:
    // 0x21f534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f53c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f540: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f544: 0x3e00008  jr          $ra
    ctx->pc = 0x21F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F544u;
        // 0x21f548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F54Cu;
}
