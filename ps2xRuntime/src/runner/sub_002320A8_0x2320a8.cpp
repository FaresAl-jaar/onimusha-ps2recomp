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

// Function: sub_002320A8
// Address: 0x2320a8 - 0x232168
void sub_002320A8_0x2320a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002320A8_0x2320a8");
#endif

    ctx->pc = 0x2320a8u;

    // 0x2320a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2320a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2320acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2320b0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2320b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2320b4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2320b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2320b8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2320b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2320bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2320bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2320c0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x2320c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2320c4: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2320C4u;
    {
        const bool branch_taken_0x2320c4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2320C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320C4u;
        // 0x2320c8: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320c4) {
            ctx->pc = 0x2320E0u;
            goto label_2320e0;
        }
    }
    ctx->pc = 0x2320CCu;
    // 0x2320cc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2320ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2320d0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2320d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2320d4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2320d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2320d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2320d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2320dc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x2320dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
label_2320e0:
    // 0x2320e0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2320e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2320e4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2320e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2320e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2320e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2320ec: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2320ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2320f0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2320F0u;
    {
        const bool branch_taken_0x2320f0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2320F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320F0u;
        // 0x2320f4: 0xa0a20004  sb          $v0, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320f0) {
            ctx->pc = 0x232100u;
            goto label_232100;
        }
    }
    ctx->pc = 0x2320F8u;
    // 0x2320f8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2320f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2320fc: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x2320fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_232100:
    // 0x232100: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x232104: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x232104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x232108: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23210c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x23210cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x232110: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x232110u;
    {
        const bool branch_taken_0x232110 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x232114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232110u;
        // 0x232114: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232110) {
            ctx->pc = 0x232120u;
            goto label_232120;
        }
    }
    ctx->pc = 0x232118u;
    // 0x232118: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x232118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23211c: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x23211cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_232120:
    // 0x232120: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x232124: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x232124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x232128: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23212c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x23212cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x232130: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x232130u;
    {
        const bool branch_taken_0x232130 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x232134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232130u;
        // 0x232134: 0xa0a20008  sb          $v0, 0x8($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232130) {
            ctx->pc = 0x232140u;
            goto label_232140;
        }
    }
    ctx->pc = 0x232138u;
    // 0x232138: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x232138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23213c: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x23213cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
label_232140:
    // 0x232140: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x232144: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x232144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x232148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23214c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x23214cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x232150: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x232150u;
    {
        const bool branch_taken_0x232150 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x232154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232150u;
        // 0x232154: 0xa0a2000a  sb          $v0, 0xA($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232150) {
            ctx->pc = 0x232160u;
            goto label_232160;
        }
    }
    ctx->pc = 0x232158u;
    // 0x232158: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x232158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23215c: 0xa0a2000b  sb          $v0, 0xB($a1)
    ctx->pc = 0x23215cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 2));
label_232160:
    // 0x232160: 0x3e00008  jr          $ra
    ctx->pc = 0x232160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232168u;
}
