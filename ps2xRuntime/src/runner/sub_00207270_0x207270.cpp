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

// Function: sub_00207270
// Address: 0x207270 - 0x2072f4
void sub_00207270_0x207270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207270_0x207270");
#endif

    switch (ctx->pc) {
        case 0x20728cu: goto label_20728c;
        case 0x2072c0u: goto label_2072c0;
        default: break;
    }

    ctx->pc = 0x207270u;

    // 0x207270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207278: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x207278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20727c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207284: 0xc081d84  jal         func_207610
    ctx->pc = 0x207284u;
    SET_GPR_U32(ctx, 31, 0x20728Cu);
    ctx->pc = 0x207288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207284u;
    // 0x207288: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207284u, 0x20728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20728Cu;
label_20728c:
    // 0x20728c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207298: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x207298u;
    {
        const bool branch_taken_0x207298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207298u;
        // 0x20729c: 0x24847690  addiu       $a0, $a0, 0x7690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207298) {
            ctx->pc = 0x2072B8u;
            goto label_2072b8;
        }
    }
    ctx->pc = 0x2072A0u;
    // 0x2072a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2072a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2072a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2072a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2072a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2072a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2072ac: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2072ACu;
    ctx->pc = 0x2072B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072ACu;
    // 0x2072b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2072B4u;
    // 0x2072b4: 0x0  nop
    ctx->pc = 0x2072b4u;
    // NOP
label_2072b8:
    // 0x2072b8: 0xc087020  jal         func_21C080
    ctx->pc = 0x2072B8u;
    SET_GPR_U32(ctx, 31, 0x2072C0u);
    ctx->pc = 0x2072BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072B8u;
    // 0x2072bc: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C080u, 0x2072B8u, 0x2072C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072C0u;
label_2072c0:
    // 0x2072c0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2072c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2072C4u;
    {
        const bool branch_taken_0x2072c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072C4u;
        // 0x2072c8: 0x248476c0  addiu       $a0, $a0, 0x76C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072c4) {
            ctx->pc = 0x2072E0u;
            goto label_2072e0;
        }
    }
    ctx->pc = 0x2072CCu;
    // 0x2072cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2072ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2072d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2072d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2072d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2072d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2072d8: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2072D8u;
    ctx->pc = 0x2072DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072D8u;
    // 0x2072dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2072E0u;
label_2072e0:
    // 0x2072e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2072e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2072e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2072e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2072e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2072e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2072ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2072ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2072F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072ECu;
        // 0x2072f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2072ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2072F4u;
}
