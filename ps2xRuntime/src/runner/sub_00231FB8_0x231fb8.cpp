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

// Function: sub_00231FB8
// Address: 0x231fb8 - 0x2320a8
void sub_00231FB8_0x231fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231FB8_0x231fb8");
#endif

    ctx->pc = 0x231fb8u;

    // 0x231fb8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231fbc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x231fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231fc0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x231fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x231fc4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x231fc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x231fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x231fcc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x231fccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x231fd0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231fd4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x231fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231fd8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x231fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x231fdc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x231fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x231fe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x231fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x231fe4: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x231fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x231fe8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231fec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x231fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x231ff0: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x231ff0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231ff4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x231ff8: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x231ff8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x231ffc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x231ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x232000: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x232004: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x232008: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x232008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x23200c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x23200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x232010: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x232010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x232014: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x232014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x232018: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x232018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23201c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x23201cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x232020: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x232020u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x232024: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x232024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x232028: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x232028u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x23202c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x232030: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x232030u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x232034: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x232034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x232038: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x232038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x23203c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x23203cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x232040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x232040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x232044: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x232044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x232048: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x232048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23204c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x23204cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x232050: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x232050u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x232054: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x232054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x232058: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x232058u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x23205c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x232060: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x232064: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x232064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x232068: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x232068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x23206c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x23206cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x232070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x232070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x232074: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x232074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x232078: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x232078u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23207c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23207cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232080: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x232080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x232084: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x232084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x232088: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x232088u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x23208c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23208cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x232090: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x232090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x232094: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x232094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x232098: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x232098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x23209c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2320a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2320A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2320A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320A0u;
        // 0x2320a4: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2320A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2320A8u;
}
