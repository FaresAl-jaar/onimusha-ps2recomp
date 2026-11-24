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

// Function: sub_001461A0
// Address: 0x1461a0 - 0x146288
void sub_001461A0_0x1461a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001461A0_0x1461a0");
#endif

    ctx->pc = 0x1461a0u;

    // 0x1461a0: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1461A0u;
    {
        const bool branch_taken_0x1461a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1461a0) {
            ctx->pc = 0x1461E0u;
            goto label_1461e0;
        }
    }
    ctx->pc = 0x1461A8u;
    // 0x1461a8: 0xa0800350  sb          $zero, 0x350($a0)
    ctx->pc = 0x1461a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 848), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461ac: 0xa0800351  sb          $zero, 0x351($a0)
    ctx->pc = 0x1461acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 849), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461b0: 0xa0800352  sb          $zero, 0x352($a0)
    ctx->pc = 0x1461b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 850), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461b4: 0xa0800353  sb          $zero, 0x353($a0)
    ctx->pc = 0x1461b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 851), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461b8: 0xa0800354  sb          $zero, 0x354($a0)
    ctx->pc = 0x1461b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 852), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461bc: 0xa0800355  sb          $zero, 0x355($a0)
    ctx->pc = 0x1461bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 853), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461c0: 0xa0800356  sb          $zero, 0x356($a0)
    ctx->pc = 0x1461c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 854), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461c4: 0xa0800357  sb          $zero, 0x357($a0)
    ctx->pc = 0x1461c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 855), (uint8_t)GPR_U32(ctx, 0));
    // 0x1461c8: 0xac80033c  sw          $zero, 0x33C($a0)
    ctx->pc = 0x1461c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 828), GPR_U32(ctx, 0));
    // 0x1461cc: 0xac800340  sw          $zero, 0x340($a0)
    ctx->pc = 0x1461ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 0));
    // 0x1461d0: 0xac800344  sw          $zero, 0x344($a0)
    ctx->pc = 0x1461d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 0));
    // 0x1461d4: 0xac80034c  sw          $zero, 0x34C($a0)
    ctx->pc = 0x1461d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 844), GPR_U32(ctx, 0));
    // 0x1461d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1461D8u;
    {
        const bool branch_taken_0x1461d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1461DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461D8u;
        // 0x1461dc: 0xac800348  sw          $zero, 0x348($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461d8) {
            ctx->pc = 0x146280u;
            goto label_146280;
        }
    }
    ctx->pc = 0x1461E0u;
label_1461e0:
    // 0x1461e0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1461e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1461e4: 0xa0830350  sb          $v1, 0x350($a0)
    ctx->pc = 0x1461e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 848), (uint8_t)GPR_U32(ctx, 3));
    // 0x1461e8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1461e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1461ec: 0xa0830351  sb          $v1, 0x351($a0)
    ctx->pc = 0x1461ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 849), (uint8_t)GPR_U32(ctx, 3));
    // 0x1461f0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1461f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1461f4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1461f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1461f8: 0xa0830352  sb          $v1, 0x352($a0)
    ctx->pc = 0x1461f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 850), (uint8_t)GPR_U32(ctx, 3));
    // 0x1461fc: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1461fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x146200: 0xa0830353  sb          $v1, 0x353($a0)
    ctx->pc = 0x146200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 851), (uint8_t)GPR_U32(ctx, 3));
    // 0x146204: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x146204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x146208: 0xa0800354  sb          $zero, 0x354($a0)
    ctx->pc = 0x146208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 852), (uint8_t)GPR_U32(ctx, 0));
    // 0x14620c: 0xa0800355  sb          $zero, 0x355($a0)
    ctx->pc = 0x14620cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 853), (uint8_t)GPR_U32(ctx, 0));
    // 0x146210: 0xa0800356  sb          $zero, 0x356($a0)
    ctx->pc = 0x146210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 854), (uint8_t)GPR_U32(ctx, 0));
    // 0x146214: 0xa0800357  sb          $zero, 0x357($a0)
    ctx->pc = 0x146214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 855), (uint8_t)GPR_U32(ctx, 0));
    // 0x146218: 0xac85033c  sw          $a1, 0x33C($a0)
    ctx->pc = 0x146218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 828), GPR_U32(ctx, 5));
    // 0x14621c: 0x90860350  lbu         $a2, 0x350($a0)
    ctx->pc = 0x14621cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x146220: 0x8c83033c  lw          $v1, 0x33C($a0)
    ctx->pc = 0x146220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 828)));
    // 0x146224: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x146224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x146228: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x146228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14622c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14622cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x146230: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x146230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x146234: 0xac830340  sw          $v1, 0x340($a0)
    ctx->pc = 0x146234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 3));
    // 0x146238: 0x90860351  lbu         $a2, 0x351($a0)
    ctx->pc = 0x146238u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 849)));
    // 0x14623c: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x14623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x146240: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x146240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x146244: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x146248: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x146248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14624c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x146250: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x146250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x146254: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x146254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x146258: 0xac830344  sw          $v1, 0x344($a0)
    ctx->pc = 0x146258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 3));
    // 0x14625c: 0x90860352  lbu         $a2, 0x352($a0)
    ctx->pc = 0x14625cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 850)));
    // 0x146260: 0x8c830344  lw          $v1, 0x344($a0)
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x146264: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x146264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x146268: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x146268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14626c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14626cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x146270: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x146270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x146274: 0xac83034c  sw          $v1, 0x34C($a0)
    ctx->pc = 0x146274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 844), GPR_U32(ctx, 3));
    // 0x146278: 0xac800348  sw          $zero, 0x348($a0)
    ctx->pc = 0x146278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 840), GPR_U32(ctx, 0));
    // 0x14627c: 0x0  nop
    ctx->pc = 0x14627cu;
    // NOP
label_146280:
    // 0x146280: 0x3e00008  jr          $ra
    ctx->pc = 0x146280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146288u;
}
