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

// Function: sub_003D9710
// Address: 0x3d9710 - 0x3d978c
void sub_003D9710_0x3d9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9710_0x3d9710");
#endif

    switch (ctx->pc) {
        case 0x3d977cu: goto label_3d977c;
        default: break;
    }

    ctx->pc = 0x3d9710u;

    // 0x3d9710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d971c: 0x90852be1  lbu         $a1, 0x2BE1($a0)
    ctx->pc = 0x3d971cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9720: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D9720u;
    {
        const bool branch_taken_0x3d9720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d9720) {
            ctx->pc = 0x3D9768u;
            goto label_3d9768;
        }
    }
    ctx->pc = 0x3D9728u;
    // 0x3d9728: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9728u;
    {
        const bool branch_taken_0x3d9728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9728) {
            ctx->pc = 0x3D9738u;
            goto label_3d9738;
        }
    }
    ctx->pc = 0x3D9730u;
    // 0x3d9730: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D9730u;
    {
        const bool branch_taken_0x3d9730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9730) {
            ctx->pc = 0x3D9780u;
            goto label_3d9780;
        }
    }
    ctx->pc = 0x3D9738u;
label_3d9738:
    // 0x3d9738: 0x240300f9  addiu       $v1, $zero, 0xF9
    ctx->pc = 0x3d9738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x3d973c: 0xa0832be4  sb          $v1, 0x2BE4($a0)
    ctx->pc = 0x3d973cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9740: 0xa0802be5  sb          $zero, 0x2BE5($a0)
    ctx->pc = 0x3d9740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9744: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3d9744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9748: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d9748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d974c: 0xa4802be6  sh          $zero, 0x2BE6($a0)
    ctx->pc = 0x3d974cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9750: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d9750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9754: 0xa4802be8  sh          $zero, 0x2BE8($a0)
    ctx->pc = 0x3d9754u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9758: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d9758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d975c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9760: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d9760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9764: 0x0  nop
    ctx->pc = 0x3d9764u;
    // NOP
label_3d9768:
    // 0x3d9768: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d9768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d976c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D976Cu;
    {
        const bool branch_taken_0x3d976c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d976c) {
            ctx->pc = 0x3D9780u;
            goto label_3d9780;
        }
    }
    ctx->pc = 0x3D9774u;
    // 0x3d9774: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D9774u;
    SET_GPR_U32(ctx, 31, 0x3D977Cu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D9774u, 0x3D977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D977Cu;
label_3d977c:
    // 0x3d977c: 0x0  nop
    ctx->pc = 0x3d977cu;
    // NOP
label_3d9780:
    // 0x3d9780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9784: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9784u;
        // 0x3d9788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D978Cu;
}
