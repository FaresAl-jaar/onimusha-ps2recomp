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

// Function: sub_002A1FC0
// Address: 0x2a1fc0 - 0x2a20e4
void sub_002A1FC0_0x2a1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1FC0_0x2a1fc0");
#endif

    switch (ctx->pc) {
        case 0x2a2010u: goto label_2a2010;
        case 0x2a2018u: goto label_2a2018;
        case 0x2a2040u: goto label_2a2040;
        case 0x2a2070u: goto label_2a2070;
        default: break;
    }

    ctx->pc = 0x2a1fc0u;

    // 0x2a1fc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a1fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a1fc4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1fc8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a1fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a1fcc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a1fd0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a1fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a1fd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1fd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a1fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a1fdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a1fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a1fe0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2a1fe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a1fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a1fe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a1fec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1ff0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a1ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1ffc: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2a1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a2000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a2000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2004: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x2a2004u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2008: 0x92b70001  lbu         $s7, 0x1($s5)
    ctx->pc = 0x2a2008u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x2a200c: 0x0  nop
    ctx->pc = 0x2a200cu;
    // NOP
label_2a2010:
    // 0x2a2010: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a2010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2014: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a2014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2018:
    // 0x2a2018: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x2a2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2a201c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2020: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a2020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a2024: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a2024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a2028: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2a2028u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a202c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2a202cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a2030: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2a2030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a2034: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a2038: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A2038u;
    SET_GPR_U32(ctx, 31, 0x2A2040u);
    ctx->pc = 0x2A203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2038u;
    // 0x2a203c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A2038u, 0x2A2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2040u;
label_2a2040:
    // 0x2a2040: 0xae960004  sw          $s6, 0x4($s4)
    ctx->pc = 0x2a2040u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 22));
    // 0x2a2044: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2a2044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a2048: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x2a2048u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a204c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2a204cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2a2050: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2a2050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2a2054: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2a2054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a2058: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a2058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a205c: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x2a205cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2a2060: 0x26c3000f  addiu       $v1, $s6, 0xF
    ctx->pc = 0x2a2060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
    // 0x2a2064: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x2a2064u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2068: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A2068u;
    SET_GPR_U32(ctx, 31, 0x2A2070u);
    ctx->pc = 0x2A206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2068u;
    // 0x2a206c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A2068u, 0x2A2070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2070u;
label_2a2070:
    // 0x2a2070: 0xae960008  sw          $s6, 0x8($s4)
    ctx->pc = 0x2a2070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 22));
    // 0x2a2074: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a2074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a2078: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x2a2078u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2a207c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2a207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a2080: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2a2080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a2084: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2a2084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2a2088: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2a2088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a208c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a2090: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a2090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a2094: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x2a2094u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2a2098: 0x26c4000f  addiu       $a0, $s6, 0xF
    ctx->pc = 0x2a2098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 15));
    // 0x2a209c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2A209Cu;
    {
        const bool branch_taken_0x2a209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A209Cu;
        // 0x2a20a0: 0x83b024  and         $s6, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a209c) {
            ctx->pc = 0x2A2018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2018;
        }
    }
    ctx->pc = 0x2A20A4u;
    // 0x2a20a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a20a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a20a8: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x2a20a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2a20ac: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2A20ACu;
    {
        const bool branch_taken_0x2a20ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20ACu;
        // 0x2a20b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20ac) {
            ctx->pc = 0x2A2010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2010;
        }
    }
    ctx->pc = 0x2A20B4u;
    // 0x2a20b4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2a20b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a20b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a20bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a20bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a20c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a20c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a20c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a20c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a20c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a20c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a20cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a20ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a20d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a20d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a20d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a20d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a20d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a20d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a20dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A20DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20DCu;
        // 0x2a20e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A20DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A20E4u;
}
