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

// Function: sub_00252248
// Address: 0x252248 - 0x2522f4
void sub_00252248_0x252248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252248_0x252248");
#endif

    ctx->pc = 0x252248u;

    // 0x252248: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x252248u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25224c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x25224cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x252250: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x252250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x252254: 0x24c6f9d0  addiu       $a2, $a2, -0x630
    ctx->pc = 0x252254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965712));
    // 0x252258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x252258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25225c: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x25225cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x252260: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x252260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x252264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x252264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x252268: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x252268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25226c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x25226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x252270: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x252270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252274: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x252274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x252278: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x252278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x25227c: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x25227cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x252280: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x252280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x252284: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x252284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x252288: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x252288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25228c: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x25228cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x252290: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x252290u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x252294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x252294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252298: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x252298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25229c: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x25229cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2522a0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2522a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2522a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2522a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2522a8: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x2522a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2522ac: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x2522acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2522b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2522b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2522b4: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x2522b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2522b8: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2522b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2522bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2522bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2522c0: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x2522c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2522c4: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x2522c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2522c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2522c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2522cc: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x2522ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2522d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2522d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2522d4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x2522d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2522d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2522d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2522dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2522dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2522e0: 0x454821  addu        $t1, $v0, $a1
    ctx->pc = 0x2522e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2522e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2522e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2522e8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x2522e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2522ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2522ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2522F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522ECu;
        // 0x2522f0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2522ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2522F4u;
}
