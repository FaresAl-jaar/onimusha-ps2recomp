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

// Function: sub_00202040
// Address: 0x202040 - 0x202124
void sub_00202040_0x202040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202040_0x202040");
#endif

    ctx->pc = 0x202040u;

    // 0x202040: 0x8c8d0014  lw          $t5, 0x14($a0)
    ctx->pc = 0x202040u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x202044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202048: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x202048u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20204c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202050: 0xd102a  slt         $v0, $zero, $t5
    ctx->pc = 0x202050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x202054: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x202054u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202058: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x202058u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20205c: 0x62680a  movz        $t5, $v1, $v0
    ctx->pc = 0x20205cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x202060: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x202060u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202064: 0x15cb000c  bne         $t6, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x202064u;
    {
        const bool branch_taken_0x202064 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 11));
        ctx->pc = 0x202068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202064u;
        // 0x202068: 0x8c8c0004  lw          $t4, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202064) {
            ctx->pc = 0x202098u;
            goto label_202098;
        }
    }
    ctx->pc = 0x20206Cu;
    // 0x20206c: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x20206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x202070: 0x29830000  slti        $v1, $t4, 0x0
    ctx->pc = 0x202070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x202074: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x202074u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x202078: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x202078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x20207c: 0x4d1018  mult        $v0, $v0, $t5
    ctx->pc = 0x20207cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x202080: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x202080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x202084: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x202084u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x202088: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x202088u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x20208c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20208Cu;
    {
        const bool branch_taken_0x20208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20208Cu;
        // 0x202090: 0xaf200000  sw          $zero, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20208c) {
            ctx->pc = 0x2020D0u;
            goto label_2020d0;
        }
    }
    ctx->pc = 0x202094u;
    // 0x202094: 0x0  nop
    ctx->pc = 0x202094u;
    // NOP
label_202098:
    // 0x202098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x202098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20209c: 0x15c20010  bne         $t6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20209Cu;
    {
        const bool branch_taken_0x20209c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x2020A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20209Cu;
        // 0x2020a0: 0x29830000  slti        $v1, $t4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20209c) {
            ctx->pc = 0x2020E0u;
            goto label_2020e0;
        }
    }
    ctx->pc = 0x2020A4u;
    // 0x2020a4: 0x29820000  slti        $v0, $t4, 0x0
    ctx->pc = 0x2020a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2020a8: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x2020a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x2020ac: 0x82600b  movn        $t4, $a0, $v0
    ctx->pc = 0x2020acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x2020b0: 0xc1b83  sra         $v1, $t4, 14
    ctx->pc = 0x2020b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 14));
    // 0x2020b4: 0x6d1018  mult        $v0, $v1, $t5
    ctx->pc = 0x2020b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2020b8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x2020b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2020bc: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x2020bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2020c0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x2020c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x2020c4: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x2020c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x2020c8: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x2020c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x2020cc: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x2020ccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_2020d0:
    // 0x2020d0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2020d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2020d4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2020d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2020d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2020D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020D8u;
        // 0x2020dc: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2020E0u;
label_2020e0:
    // 0x2020e0: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x2020e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x2020e4: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x2020e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x2020e8: 0x24055dcc  addiu       $a1, $zero, 0x5DCC
    ctx->pc = 0x2020e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24012));
    // 0x2020ec: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x2020ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x2020f0: 0x24065f0c  addiu       $a2, $zero, 0x5F0C
    ctx->pc = 0x2020f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24332));
    // 0x2020f4: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x2020f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2020f8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2020f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2020fc: 0x340781c0  ori         $a3, $zero, 0x81C0
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
    // 0x202100: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x202100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x202104: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x202104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x202108: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x202108u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x20210c: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x20210cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x202110: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x202110u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x202114: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x202114u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x202118: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x202118u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x20211c: 0x3e00008  jr          $ra
    ctx->pc = 0x20211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20211Cu;
        // 0x202120: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20211Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202124u;
}
