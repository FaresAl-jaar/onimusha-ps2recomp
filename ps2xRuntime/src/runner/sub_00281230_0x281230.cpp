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

// Function: sub_00281230
// Address: 0x281230 - 0x2812d0
void sub_00281230_0x281230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281230_0x281230");
#endif

    ctx->pc = 0x281230u;

    // 0x281230: 0x87838140  lh          $v1, -0x7EC0($gp)
    ctx->pc = 0x281230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934848)));
    // 0x281234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281238: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x281238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x28123c: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x28123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x281240: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x281240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281244: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x281244u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x281248: 0x87838144  lh          $v1, -0x7EBC($gp)
    ctx->pc = 0x281248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934852)));
    // 0x28124c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x28124cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x281250: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x281250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x281254: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x281254u;
    {
        const bool branch_taken_0x281254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x281254) {
            ctx->pc = 0x2812A0u;
            goto label_2812a0;
        }
    }
    ctx->pc = 0x28125Cu;
    // 0x28125c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28125Cu;
    {
        const bool branch_taken_0x28125c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28125c) {
            ctx->pc = 0x281270u;
            goto label_281270;
        }
    }
    ctx->pc = 0x281264u;
    // 0x281264: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x281264u;
    {
        const bool branch_taken_0x281264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281264) {
            ctx->pc = 0x2812C8u;
            goto label_2812c8;
        }
    }
    ctx->pc = 0x28126Cu;
    // 0x28126c: 0x0  nop
    ctx->pc = 0x28126cu;
    // NOP
label_281270:
    // 0x281270: 0x90850839  lbu         $a1, 0x839($a0)
    ctx->pc = 0x281270u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2105)));
    // 0x281274: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x281274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x281278: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x281278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x28127c: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x28127cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x281280: 0x90a5000c  lbu         $a1, 0xC($a1)
    ctx->pc = 0x281280u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x281284: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x281284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281288: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x281288u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x28128c: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x28128cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x281290: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x281290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x281294: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x281294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x281298: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x281298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x28129c: 0x0  nop
    ctx->pc = 0x28129cu;
    // NOP
label_2812a0:
    // 0x2812a0: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x2812a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x2812a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2812A4u;
    {
        const bool branch_taken_0x2812a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2812A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812A4u;
        // 0x2812a8: 0x248307a0  addiu       $v1, $a0, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812a4) {
            ctx->pc = 0x2812C8u;
            goto label_2812c8;
        }
    }
    ctx->pc = 0x2812ACu;
    // 0x2812ac: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2812acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2812b0: 0x90830839  lbu         $v1, 0x839($a0)
    ctx->pc = 0x2812b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2105)));
    // 0x2812b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2812b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2812b8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2812b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2812bc: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x2812bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2812c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2812c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2812c4: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x2812c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2812c8:
    // 0x2812c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2812C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2812CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812C8u;
        // 0x2812cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2812C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2812D0u;
}
