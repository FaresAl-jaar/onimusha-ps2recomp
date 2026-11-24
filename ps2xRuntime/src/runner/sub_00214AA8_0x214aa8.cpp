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

// Function: sub_00214AA8
// Address: 0x214aa8 - 0x214b38
void sub_00214AA8_0x214aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214AA8_0x214aa8");
#endif

    ctx->pc = 0x214aa8u;

    // 0x214aa8: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x214aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x214aac: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x214aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x214ab0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x214ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x214ab4: 0x24ca000f  addiu       $t2, $a2, 0xF
    ctx->pc = 0x214ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x214ab8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x214ab8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x214abc: 0x294b0000  slti        $t3, $t2, 0x0
    ctx->pc = 0x214abcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x214ac0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x214ac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x214ac4: 0x24c6001e  addiu       $a2, $a2, 0x1E
    ctx->pc = 0x214ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x214ac8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x214ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x214acc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x214accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x214ad0: 0x24a8003f  addiu       $t0, $a1, 0x3F
    ctx->pc = 0x214ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x214ad4: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x214ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x214ad8: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x214ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x214adc: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x214adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x214ae0: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x214ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x214ae4: 0xcb500b  movn        $t2, $a2, $t3
    ctx->pc = 0x214ae4u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 6));
    // 0x214ae8: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x214ae8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x214aec: 0x29230000  slti        $v1, $t1, 0x0
    ctx->pc = 0x214aecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x214af0: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x214af0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x214af4: 0x84183  sra         $t0, $t0, 6
    ctx->pc = 0x214af4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 6));
    // 0x214af8: 0xa5103  sra         $t2, $t2, 4
    ctx->pc = 0x214af8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x214afc: 0x94983  sra         $t1, $t1, 6
    ctx->pc = 0x214afcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x214b00: 0x10a1018  mult        $v0, $t0, $t2
    ctx->pc = 0x214b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x214b04: 0x712a5018  mult1       $t2, $t1, $t2
    ctx->pc = 0x214b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x214b08: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x214b08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x214b0c: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x214b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x214b10: 0xa4e8000e  sh          $t0, 0xE($a3)
    ctx->pc = 0x214b10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x214b14: 0xa4e9000c  sh          $t1, 0xC($a3)
    ctx->pc = 0x214b14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x214b18: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x214b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x214b1c: 0xa5240  sll         $t2, $t2, 9
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 9));
    // 0x214b20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x214b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214b24: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x214b24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x214b28: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x214b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x214b2c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x214b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x214b30: 0x3e00008  jr          $ra
    ctx->pc = 0x214B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B30u;
        // 0x214b34: 0xacea0004  sw          $t2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B38u;
}
