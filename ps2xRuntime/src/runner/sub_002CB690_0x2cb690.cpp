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

// Function: sub_002CB690
// Address: 0x2cb690 - 0x2cb740
void sub_002CB690_0x2cb690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB690_0x2cb690");
#endif

    switch (ctx->pc) {
        case 0x2cb6a8u: goto label_2cb6a8;
        case 0x2cb6f8u: goto label_2cb6f8;
        default: break;
    }

    ctx->pc = 0x2cb690u;

    // 0x2cb690: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2cb690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2cb694: 0x8c25f680  lw          $a1, -0x980($at)
    ctx->pc = 0x2cb694u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8BF680u));
    // 0x2cb698: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2cb698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cb69c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB69Cu;
    {
        const bool branch_taken_0x2cb69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB69Cu;
        // 0x2cb6a0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb69c) {
            ctx->pc = 0x2CB6E0u;
            goto label_2cb6e0;
        }
    }
    ctx->pc = 0x2CB6A4u;
    // 0x2cb6a4: 0x0  nop
    ctx->pc = 0x2cb6a4u;
    // NOP
label_2cb6a8:
    // 0x2cb6a8: 0x90a30640  lbu         $v1, 0x640($a1)
    ctx->pc = 0x2cb6a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2cb6ac: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB6ACu;
    {
        const bool branch_taken_0x2cb6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cb6ac) {
            ctx->pc = 0x2CB6D0u;
            goto label_2cb6d0;
        }
    }
    ctx->pc = 0x2CB6B4u;
    // 0x2cb6b4: 0x8ca30530  lw          $v1, 0x530($a1)
    ctx->pc = 0x2cb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1328)));
    // 0x2cb6b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB6B8u;
    {
        const bool branch_taken_0x2cb6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6b8) {
            ctx->pc = 0x2CB6D0u;
            goto label_2cb6d0;
        }
    }
    ctx->pc = 0x2CB6C0u;
    // 0x2cb6c0: 0x90a304f5  lbu         $v1, 0x4F5($a1)
    ctx->pc = 0x2cb6c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1269)));
    // 0x2cb6c4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2cb6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2cb6c8: 0xa0a304f5  sb          $v1, 0x4F5($a1)
    ctx->pc = 0x2cb6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1269), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb6cc: 0x0  nop
    ctx->pc = 0x2cb6ccu;
    // NOP
label_2cb6d0:
    // 0x2cb6d0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2cb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cb6d4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2cb6d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cb6d8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CB6D8u;
    {
        const bool branch_taken_0x2cb6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6d8) {
            ctx->pc = 0x2CB6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb6a8;
        }
    }
    ctx->pc = 0x2CB6E0u;
label_2cb6e0:
    // 0x2cb6e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb6e4: 0x8c252410  lw          $a1, 0x2410($at)
    ctx->pc = 0x2cb6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D2410u));
    // 0x2cb6e8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2cb6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cb6ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB6ECu;
    {
        const bool branch_taken_0x2cb6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB6ECu;
        // 0x2cb6f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb6ec) {
            ctx->pc = 0x2CB730u;
            goto label_2cb730;
        }
    }
    ctx->pc = 0x2CB6F4u;
    // 0x2cb6f4: 0x0  nop
    ctx->pc = 0x2cb6f4u;
    // NOP
label_2cb6f8:
    // 0x2cb6f8: 0x90a30640  lbu         $v1, 0x640($a1)
    ctx->pc = 0x2cb6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2cb6fc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB6FCu;
    {
        const bool branch_taken_0x2cb6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cb6fc) {
            ctx->pc = 0x2CB720u;
            goto label_2cb720;
        }
    }
    ctx->pc = 0x2CB704u;
    // 0x2cb704: 0x8ca30530  lw          $v1, 0x530($a1)
    ctx->pc = 0x2cb704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1328)));
    // 0x2cb708: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB708u;
    {
        const bool branch_taken_0x2cb708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb708) {
            ctx->pc = 0x2CB720u;
            goto label_2cb720;
        }
    }
    ctx->pc = 0x2CB710u;
    // 0x2cb710: 0x90a304f5  lbu         $v1, 0x4F5($a1)
    ctx->pc = 0x2cb710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1269)));
    // 0x2cb714: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2cb714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2cb718: 0xa0a304f5  sb          $v1, 0x4F5($a1)
    ctx->pc = 0x2cb718u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1269), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb71c: 0x0  nop
    ctx->pc = 0x2cb71cu;
    // NOP
label_2cb720:
    // 0x2cb720: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2cb720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cb724: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2cb724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cb728: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CB728u;
    {
        const bool branch_taken_0x2cb728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb728) {
            ctx->pc = 0x2CB6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb6f8;
        }
    }
    ctx->pc = 0x2CB730u;
label_2cb730:
    // 0x2cb730: 0x97838858  lhu         $v1, -0x77A8($gp)
    ctx->pc = 0x2cb730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
    // 0x2cb734: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2cb734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2cb738: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB738u;
        // 0x2cb73c: 0xa7838858  sh          $v1, -0x77A8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936664), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB740u;
}
