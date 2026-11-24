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

// Function: sub_0036BB90
// Address: 0x36bb90 - 0x36bc94
void sub_0036BB90_0x36bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BB90_0x36bb90");
#endif

    switch (ctx->pc) {
        case 0x36bbecu: goto label_36bbec;
        case 0x36bc34u: goto label_36bc34;
        case 0x36bc7cu: goto label_36bc7c;
        default: break;
    }

    ctx->pc = 0x36bb90u;

    // 0x36bb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36bb94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36bb98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36bb9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36bb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36bba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36bba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36bba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bba8: 0x908605e0  lbu         $a2, 0x5E0($a0)
    ctx->pc = 0x36bba8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1504)));
    // 0x36bbac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36bbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbb0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x36bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36bbb4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x36bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x36bbb8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36bbbc: 0x248418b0  addiu       $a0, $a0, 0x18B0
    ctx->pc = 0x36bbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6320));
    // 0x36bbc0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36bbc4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36bbc8: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x36bbc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bbcc: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36BBCCu;
    {
        const bool branch_taken_0x36bbcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x36bbcc) {
            ctx->pc = 0x36BBF0u;
            goto label_36bbf0;
        }
    }
    ctx->pc = 0x36BBD4u;
    // 0x36bbd4: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x36bbd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x36bbd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36bbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbdc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x36bbdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x36bbe0: 0x922805d4  lbu         $t0, 0x5D4($s1)
    ctx->pc = 0x36bbe0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1492)));
    // 0x36bbe4: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x36BBE4u;
    SET_GPR_U32(ctx, 31, 0x36BBECu);
    ctx->pc = 0x36BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BBE4u;
    // 0x36bbe8: 0x26290590  addiu       $t1, $s1, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x36BBE4u, 0x36BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BBECu;
label_36bbec:
    // 0x36bbec: 0xae2205b0  sw          $v0, 0x5B0($s1)
    ctx->pc = 0x36bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 2));
label_36bbf0:
    // 0x36bbf0: 0x922605e0  lbu         $a2, 0x5E0($s1)
    ctx->pc = 0x36bbf0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x36bbf4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x36bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x36bbf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36bbfc: 0x248418b1  addiu       $a0, $a0, 0x18B1
    ctx->pc = 0x36bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6321));
    // 0x36bc00: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x36bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36bc04: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36bc08: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36bc08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36bc0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36bc10: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x36bc10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bc14: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36BC14u;
    {
        const bool branch_taken_0x36bc14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x36bc14) {
            ctx->pc = 0x36BC38u;
            goto label_36bc38;
        }
    }
    ctx->pc = 0x36BC1Cu;
    // 0x36bc1c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x36bc1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x36bc20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36bc20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc24: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x36bc24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x36bc28: 0x922805d4  lbu         $t0, 0x5D4($s1)
    ctx->pc = 0x36bc28u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1492)));
    // 0x36bc2c: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x36BC2Cu;
    SET_GPR_U32(ctx, 31, 0x36BC34u);
    ctx->pc = 0x36BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC2Cu;
    // 0x36bc30: 0x26290590  addiu       $t1, $s1, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x36BC2Cu, 0x36BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC34u;
label_36bc34:
    // 0x36bc34: 0xae2205b4  sw          $v0, 0x5B4($s1)
    ctx->pc = 0x36bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
label_36bc38:
    // 0x36bc38: 0x922605e0  lbu         $a2, 0x5E0($s1)
    ctx->pc = 0x36bc38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x36bc3c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x36bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x36bc40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36bc44: 0x248418b2  addiu       $a0, $a0, 0x18B2
    ctx->pc = 0x36bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6322));
    // 0x36bc48: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x36bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36bc4c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36bc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36bc50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36bc54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36bc58: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x36bc58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bc5c: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36BC5Cu;
    {
        const bool branch_taken_0x36bc5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x36bc5c) {
            ctx->pc = 0x36BC80u;
            goto label_36bc80;
        }
    }
    ctx->pc = 0x36BC64u;
    // 0x36bc64: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x36bc64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x36bc68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36bc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc6c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x36bc6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x36bc70: 0x922805d4  lbu         $t0, 0x5D4($s1)
    ctx->pc = 0x36bc70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1492)));
    // 0x36bc74: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x36BC74u;
    SET_GPR_U32(ctx, 31, 0x36BC7Cu);
    ctx->pc = 0x36BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC74u;
    // 0x36bc78: 0x26290590  addiu       $t1, $s1, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x36BC74u, 0x36BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC7Cu;
label_36bc7c:
    // 0x36bc7c: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x36bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
label_36bc80:
    // 0x36bc80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36bc84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36bc84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bc88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36bc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x36BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC8Cu;
        // 0x36bc90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BC94u;
}
