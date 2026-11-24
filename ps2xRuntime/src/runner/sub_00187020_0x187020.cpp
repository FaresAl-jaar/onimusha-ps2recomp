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

// Function: sub_00187020
// Address: 0x187020 - 0x1870a0
void sub_00187020_0x187020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187020_0x187020");
#endif

    ctx->pc = 0x187020u;

    // 0x187020: 0x8ca31204  lw          $v1, 0x1204($a1)
    ctx->pc = 0x187020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4612)));
    // 0x187024: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x187024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x187028: 0x8ca311d8  lw          $v1, 0x11D8($a1)
    ctx->pc = 0x187028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4568)));
    // 0x18702c: 0xac8300c0  sw          $v1, 0xC0($a0)
    ctx->pc = 0x18702cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 3));
    // 0x187030: 0x908300ca  lbu         $v1, 0xCA($a0)
    ctx->pc = 0x187030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x187034: 0xa08300cb  sb          $v1, 0xCB($a0)
    ctx->pc = 0x187034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 203), (uint8_t)GPR_U32(ctx, 3));
    // 0x187038: 0x90a311dd  lbu         $v1, 0x11DD($a1)
    ctx->pc = 0x187038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4573)));
    // 0x18703c: 0xa08300ca  sb          $v1, 0xCA($a0)
    ctx->pc = 0x18703cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 202), (uint8_t)GPR_U32(ctx, 3));
    // 0x187040: 0x8ca311e0  lw          $v1, 0x11E0($a1)
    ctx->pc = 0x187040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4576)));
    // 0x187044: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x187048: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x187048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
    // 0x18704c: 0x8ca311e4  lw          $v1, 0x11E4($a1)
    ctx->pc = 0x18704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4580)));
    // 0x187050: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x187050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x187054: 0xa48300c8  sh          $v1, 0xC8($a0)
    ctx->pc = 0x187054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x187058: 0x8ca311fc  lw          $v1, 0x11FC($a1)
    ctx->pc = 0x187058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4604)));
    // 0x18705c: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x18705cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
    // 0x187060: 0x8ca31200  lw          $v1, 0x1200($a1)
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4608)));
    // 0x187064: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x187064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
    // 0x187068: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x187068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x18706c: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x18706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x187070: 0xc03027  not         $a2, $a2
    ctx->pc = 0x187070u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x187074: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x187074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x187078: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x187078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x18707c: 0x8ca311d0  lw          $v1, 0x11D0($a1)
    ctx->pc = 0x18707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4560)));
    // 0x187080: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x187080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
    // 0x187084: 0xc4a011f8  lwc1        $f0, 0x11F8($a1)
    ctx->pc = 0x187084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187088: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x187088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x18708c: 0xc4a011f4  lwc1        $f0, 0x11F4($a1)
    ctx->pc = 0x18708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187090: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x187090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x187094: 0x8ca311d4  lw          $v1, 0x11D4($a1)
    ctx->pc = 0x187094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4564)));
    // 0x187098: 0x3e00008  jr          $ra
    ctx->pc = 0x187098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187098u;
        // 0x18709c: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1870A0u;
}
