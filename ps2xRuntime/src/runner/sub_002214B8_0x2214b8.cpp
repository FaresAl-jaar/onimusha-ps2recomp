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

// Function: sub_002214B8
// Address: 0x2214b8 - 0x221530
void sub_002214B8_0x2214b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002214B8_0x2214b8");
#endif

    switch (ctx->pc) {
        case 0x2214dcu: goto label_2214dc;
        case 0x221500u: goto label_221500;
        default: break;
    }

    ctx->pc = 0x2214b8u;

    // 0x2214b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2214b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2214bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2214bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2214c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2214c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2214c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2214c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2214c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2214cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2214ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2214d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2214d4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x2214D4u;
    SET_GPR_U32(ctx, 31, 0x2214DCu);
    ctx->pc = 0x2214D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214D4u;
    // 0x2214d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x2214D4u, 0x2214DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214DCu;
label_2214dc:
    // 0x2214dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2214dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2214e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2214E0u;
    {
        const bool branch_taken_0x2214e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214E0u;
        // 0x2214e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214e0) {
            ctx->pc = 0x221500u;
            goto label_221500;
        }
    }
    ctx->pc = 0x2214E8u;
    // 0x2214e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2214e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2214ec: 0x34a5011b  ori         $a1, $a1, 0x11B
    ctx->pc = 0x2214ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)283);
    // 0x2214f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2214f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2214f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2214f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2214f8: 0x80848e0  j           func_212380
    ctx->pc = 0x2214F8u;
    ctx->pc = 0x2214FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214F8u;
    // 0x2214fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x221500u;
label_221500:
    // 0x221500: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x221500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x221504: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221504u;
    {
        const bool branch_taken_0x221504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221504u;
        // 0x221508: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221504) {
            ctx->pc = 0x22151Cu;
            goto label_22151c;
        }
    }
    ctx->pc = 0x22150Cu;
    // 0x22150c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22150cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x221510: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x221510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x221514: 0x8c848c70  lw          $a0, -0x7390($a0)
    ctx->pc = 0x221514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937712)));
    // 0x221518: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x221518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_22151c:
    // 0x22151c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22151cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221528: 0x3e00008  jr          $ra
    ctx->pc = 0x221528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221528u;
        // 0x22152c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221530u;
}
