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

// Function: sub_00329690
// Address: 0x329690 - 0x329700
void sub_00329690_0x329690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329690_0x329690");
#endif

    ctx->pc = 0x329690u;

    // 0x329690: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x329690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x329694: 0x90c30093  lbu         $v1, 0x93($a2)
    ctx->pc = 0x329694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 147)));
    // 0x329698: 0xa0c3009f  sb          $v1, 0x9F($a2)
    ctx->pc = 0x329698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 159), (uint8_t)GPR_U32(ctx, 3));
    // 0x32969c: 0x84c5008c  lh          $a1, 0x8C($a2)
    ctx->pc = 0x32969cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x3296a0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296a4: 0xa465001a  sh          $a1, 0x1A($v1)
    ctx->pc = 0x3296a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 5));
    // 0x3296a8: 0x84c5008e  lh          $a1, 0x8E($a2)
    ctx->pc = 0x3296a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 142)));
    // 0x3296ac: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296b0: 0xa465001c  sh          $a1, 0x1C($v1)
    ctx->pc = 0x3296b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 5));
    // 0x3296b4: 0x80c50091  lb          $a1, 0x91($a2)
    ctx->pc = 0x3296b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 145)));
    // 0x3296b8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296bc: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x3296bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x3296c0: 0x80c50092  lb          $a1, 0x92($a2)
    ctx->pc = 0x3296c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x3296c4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296c8: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x3296c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x3296cc: 0x80c50090  lb          $a1, 0x90($a2)
    ctx->pc = 0x3296ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x3296d0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296d4: 0xa4650022  sh          $a1, 0x22($v1)
    ctx->pc = 0x3296d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 5));
    // 0x3296d8: 0x84c50098  lh          $a1, 0x98($a2)
    ctx->pc = 0x3296d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x3296dc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296e0: 0xa4650040  sh          $a1, 0x40($v1)
    ctx->pc = 0x3296e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x3296e4: 0x84c5009a  lh          $a1, 0x9A($a2)
    ctx->pc = 0x3296e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 154)));
    // 0x3296e8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296ec: 0xa4650042  sh          $a1, 0x42($v1)
    ctx->pc = 0x3296ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 5));
    // 0x3296f0: 0x90c50094  lbu         $a1, 0x94($a2)
    ctx->pc = 0x3296f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x3296f4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3296f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3296f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3296F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3296FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296F8u;
        // 0x3296fc: 0xa06500a0  sb          $a1, 0xA0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 160), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3296F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329700u;
}
