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

// Function: sub_00166490
// Address: 0x166490 - 0x166510
void sub_00166490_0x166490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166490_0x166490");
#endif

    ctx->pc = 0x166490u;

    // 0x166490: 0x90a70098  lbu         $a3, 0x98($a1)
    ctx->pc = 0x166490u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x166494: 0x30e30040  andi        $v1, $a3, 0x40
    ctx->pc = 0x166494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x166498: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x166498u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16649c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16649Cu;
    {
        const bool branch_taken_0x16649c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16649Cu;
        // 0x1664a0: 0x24a90098  addiu       $t1, $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16649c) {
            ctx->pc = 0x166500u;
            goto label_166500;
        }
    }
    ctx->pc = 0x1664A4u;
    // 0x1664a4: 0x30e30080  andi        $v1, $a3, 0x80
    ctx->pc = 0x1664a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x1664a8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1664a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1664ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1664ACu;
    {
        const bool branch_taken_0x1664ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1664ac) {
            ctx->pc = 0x166500u;
            goto label_166500;
        }
    }
    ctx->pc = 0x1664B4u;
    // 0x1664b4: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x1664b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1664b8: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1664b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1664bc: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x1664bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1664c0: 0xa08700a8  sb          $a3, 0xA8($a0)
    ctx->pc = 0x1664c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 168), (uint8_t)GPR_U32(ctx, 7));
    // 0x1664c4: 0xa08300a9  sb          $v1, 0xA9($a0)
    ctx->pc = 0x1664c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 169), (uint8_t)GPR_U32(ctx, 3));
    // 0x1664c8: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x1664c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1664cc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1664ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1664d0: 0xa08300aa  sb          $v1, 0xAA($a0)
    ctx->pc = 0x1664d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 170), (uint8_t)GPR_U32(ctx, 3));
    // 0x1664d4: 0xa08000ab  sb          $zero, 0xAB($a0)
    ctx->pc = 0x1664d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 171), (uint8_t)GPR_U32(ctx, 0));
    // 0x1664d8: 0xac8800ac  sw          $t0, 0xAC($a0)
    ctx->pc = 0x1664d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 8));
    // 0x1664dc: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x1664dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x1664e0: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x1664e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1664e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1664e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1664e8: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1664e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1664ec: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1664ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1664f0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1664f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1664f4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1664f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1664f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1664F8u;
    {
        const bool branch_taken_0x1664f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664F8u;
        // 0x1664fc: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664f8) {
            ctx->pc = 0x166508u;
            goto label_166508;
        }
    }
    ctx->pc = 0x166500u;
label_166500:
    // 0x166500: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x166500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x166504: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x166504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_166508:
    // 0x166508: 0x3e00008  jr          $ra
    ctx->pc = 0x166508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166510u;
}
