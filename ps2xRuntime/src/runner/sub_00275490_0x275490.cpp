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

// Function: sub_00275490
// Address: 0x275490 - 0x275540
void sub_00275490_0x275490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275490_0x275490");
#endif

    switch (ctx->pc) {
        case 0x2754c8u: goto label_2754c8;
        default: break;
    }

    ctx->pc = 0x275490u;

    // 0x275490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x275490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x275494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x275494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x275498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x275498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27549c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2754a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2754a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2754a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2754a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2754a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2754ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2754ACu;
    {
        const bool branch_taken_0x2754ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2754B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754ACu;
        // 0x2754b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754ac) {
            ctx->pc = 0x2754C0u;
            goto label_2754c0;
        }
    }
    ctx->pc = 0x2754B4u;
    // 0x2754b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2754B4u;
    {
        const bool branch_taken_0x2754b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754B4u;
        // 0x2754b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754b4) {
            ctx->pc = 0x275528u;
            goto label_275528;
        }
    }
    ctx->pc = 0x2754BCu;
    // 0x2754bc: 0x0  nop
    ctx->pc = 0x2754bcu;
    // NOP
label_2754c0:
    // 0x2754c0: 0xc09d504  jal         func_275410
    ctx->pc = 0x2754C0u;
    SET_GPR_U32(ctx, 31, 0x2754C8u);
    ctx->pc = 0x2754C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2754C0u;
    // 0x2754c4: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275410u, 0x2754C0u, 0x2754C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2754C8u;
label_2754c8:
    // 0x2754c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2754C8u;
    {
        const bool branch_taken_0x2754c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2754c8) {
            ctx->pc = 0x2754D8u;
            goto label_2754d8;
        }
    }
    ctx->pc = 0x2754D0u;
    // 0x2754d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2754D0u;
    {
        const bool branch_taken_0x2754d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754D0u;
        // 0x2754d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754d0) {
            ctx->pc = 0x275528u;
            goto label_275528;
        }
    }
    ctx->pc = 0x2754D8u;
label_2754d8:
    // 0x2754d8: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2754D8u;
    {
        const bool branch_taken_0x2754d8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2754DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754D8u;
        // 0x2754dc: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754d8) {
            ctx->pc = 0x2754F8u;
            goto label_2754f8;
        }
    }
    ctx->pc = 0x2754E0u;
    // 0x2754e0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2754e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2754e4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2754e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2754e8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2754e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2754ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2754ECu;
    {
        const bool branch_taken_0x2754ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2754ec) {
            ctx->pc = 0x275500u;
            goto label_275500;
        }
    }
    ctx->pc = 0x2754F4u;
    // 0x2754f4: 0x0  nop
    ctx->pc = 0x2754f4u;
    // NOP
label_2754f8:
    // 0x2754f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2754F8u;
    {
        const bool branch_taken_0x2754f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754F8u;
        // 0x2754fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754f8) {
            ctx->pc = 0x275528u;
            goto label_275528;
        }
    }
    ctx->pc = 0x275500u;
label_275500:
    // 0x275500: 0x84840006  lh          $a0, 0x6($a0)
    ctx->pc = 0x275500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x275504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275508: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x275508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27550c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x275510: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x275510u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275514: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275514u;
    {
        const bool branch_taken_0x275514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x275514) {
            ctx->pc = 0x275524u;
            goto label_275524;
        }
    }
    ctx->pc = 0x27551Cu;
    // 0x27551c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x27551Cu;
    {
        const bool branch_taken_0x27551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27551Cu;
        // 0x275520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27551c) {
            ctx->pc = 0x275524u;
            goto label_275524;
        }
    }
    ctx->pc = 0x275524u;
label_275524:
    // 0x275524: 0x0  nop
    ctx->pc = 0x275524u;
    // NOP
label_275528:
    // 0x275528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x275528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27552c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27552cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275538: 0x3e00008  jr          $ra
    ctx->pc = 0x275538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275538u;
        // 0x27553c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275540u;
}
