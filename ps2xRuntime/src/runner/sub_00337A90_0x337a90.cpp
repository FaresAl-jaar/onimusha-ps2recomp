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

// Function: sub_00337A90
// Address: 0x337a90 - 0x337ccc
void sub_00337A90_0x337a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337A90_0x337a90");
#endif

    switch (ctx->pc) {
        case 0x337ac0u: goto label_337ac0;
        case 0x337aecu: goto label_337aec;
        case 0x337af8u: goto label_337af8;
        case 0x337c20u: goto label_337c20;
        default: break;
    }

    ctx->pc = 0x337a90u;

    // 0x337a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337a94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x337a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x337a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337aa4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x337aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x337aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337aac: 0xa4820f50  sh          $v0, 0xF50($a0)
    ctx->pc = 0x337aacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3920), (uint16_t)GPR_U32(ctx, 2));
    // 0x337ab0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x337ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x337ab4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x337ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x337ab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x337ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337abc: 0x0  nop
    ctx->pc = 0x337abcu;
    // NOP
label_337ac0:
    // 0x337ac0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x337ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337ac4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x337ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x337ac8: 0x28a20370  slti        $v0, $a1, 0x370
    ctx->pc = 0x337ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)880) ? 1 : 0);
    // 0x337acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x337accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x337ad0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x337ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x337ad4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x337AD4u;
    {
        const bool branch_taken_0x337ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AD4u;
        // 0x337ad8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ad4) {
            ctx->pc = 0x337AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337ac0;
        }
    }
    ctx->pc = 0x337ADCu;
    // 0x337adc: 0x26040dcc  addiu       $a0, $s0, 0xDCC
    ctx->pc = 0x337adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3532));
    // 0x337ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337ae4: 0xc049590  jal         func_125640
    ctx->pc = 0x337AE4u;
    SET_GPR_U32(ctx, 31, 0x337AECu);
    ctx->pc = 0x337AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337AE4u;
    // 0x337ae8: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x337AE4u, 0x337AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337AECu;
label_337aec:
    // 0x337aec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x337aecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337af0: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x337af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x337af4: 0x640800ff  daddiu      $t0, $zero, 0xFF
    ctx->pc = 0x337af4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_337af8:
    // 0x337af8: 0x20a2021  addu        $a0, $s0, $t2
    ctx->pc = 0x337af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x337afc: 0xa0890e44  sb          $t1, 0xE44($a0)
    ctx->pc = 0x337afcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3652), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b00: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x337b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x337b04: 0xa0890e0e  sb          $t1, 0xE0E($a0)
    ctx->pc = 0x337b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3598), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b08: 0x2943002e  slti        $v1, $t2, 0x2E
    ctx->pc = 0x337b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x337b0c: 0xa0890eb0  sb          $t1, 0xEB0($a0)
    ctx->pc = 0x337b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3760), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b10: 0xa0890e7a  sb          $t1, 0xE7A($a0)
    ctx->pc = 0x337b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3706), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b14: 0xa0890e45  sb          $t1, 0xE45($a0)
    ctx->pc = 0x337b14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3653), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b18: 0xa0890e0f  sb          $t1, 0xE0F($a0)
    ctx->pc = 0x337b18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3599), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b1c: 0xa0890eb1  sb          $t1, 0xEB1($a0)
    ctx->pc = 0x337b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3761), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b20: 0xa0890e7b  sb          $t1, 0xE7B($a0)
    ctx->pc = 0x337b20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3707), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b24: 0xa0890e46  sb          $t1, 0xE46($a0)
    ctx->pc = 0x337b24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3654), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b28: 0xa0890e10  sb          $t1, 0xE10($a0)
    ctx->pc = 0x337b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3600), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b2c: 0xa0890eb2  sb          $t1, 0xEB2($a0)
    ctx->pc = 0x337b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3762), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b30: 0xa0890e7c  sb          $t1, 0xE7C($a0)
    ctx->pc = 0x337b30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3708), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b34: 0xa0890e47  sb          $t1, 0xE47($a0)
    ctx->pc = 0x337b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3655), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b38: 0xa0890e11  sb          $t1, 0xE11($a0)
    ctx->pc = 0x337b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3601), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b3c: 0xa0890eb3  sb          $t1, 0xEB3($a0)
    ctx->pc = 0x337b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3763), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b40: 0xa0890e7d  sb          $t1, 0xE7D($a0)
    ctx->pc = 0x337b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3709), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b44: 0xa0890e48  sb          $t1, 0xE48($a0)
    ctx->pc = 0x337b44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3656), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b48: 0xa0890e12  sb          $t1, 0xE12($a0)
    ctx->pc = 0x337b48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3602), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b4c: 0xa0890eb4  sb          $t1, 0xEB4($a0)
    ctx->pc = 0x337b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3764), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b50: 0xa0890e7e  sb          $t1, 0xE7E($a0)
    ctx->pc = 0x337b50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3710), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b54: 0xa0890e49  sb          $t1, 0xE49($a0)
    ctx->pc = 0x337b54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3657), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b58: 0xa0890e13  sb          $t1, 0xE13($a0)
    ctx->pc = 0x337b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3603), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b5c: 0xa0890eb5  sb          $t1, 0xEB5($a0)
    ctx->pc = 0x337b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3765), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b60: 0xa0890e7f  sb          $t1, 0xE7F($a0)
    ctx->pc = 0x337b60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3711), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b64: 0xa0890e4a  sb          $t1, 0xE4A($a0)
    ctx->pc = 0x337b64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3658), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b68: 0xa0890e14  sb          $t1, 0xE14($a0)
    ctx->pc = 0x337b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3604), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b6c: 0xa0890eb6  sb          $t1, 0xEB6($a0)
    ctx->pc = 0x337b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3766), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b70: 0xa0890e80  sb          $t1, 0xE80($a0)
    ctx->pc = 0x337b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3712), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b74: 0xa0890e4b  sb          $t1, 0xE4B($a0)
    ctx->pc = 0x337b74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3659), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b78: 0xa0890e15  sb          $t1, 0xE15($a0)
    ctx->pc = 0x337b78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3605), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b7c: 0xa0890eb7  sb          $t1, 0xEB7($a0)
    ctx->pc = 0x337b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3767), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b80: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x337B80u;
    {
        const bool branch_taken_0x337b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B80u;
        // 0x337b84: 0xa0890e81  sb          $t1, 0xE81($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3713), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b80) {
            ctx->pc = 0x337AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337af8;
        }
    }
    ctx->pc = 0x337B88u;
    // 0x337b88: 0x1502021  addu        $a0, $t2, $s0
    ctx->pc = 0x337b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x337b8c: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x337b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x337b90: 0xa0890e44  sb          $t1, 0xE44($a0)
    ctx->pc = 0x337b90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3652), (uint8_t)GPR_U32(ctx, 9));
    // 0x337b94: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x337b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337b98: 0xa0880e0e  sb          $t0, 0xE0E($a0)
    ctx->pc = 0x337b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3598), (uint8_t)GPR_U32(ctx, 8));
    // 0x337b9c: 0x25430002  addiu       $v1, $t2, 0x2
    ctx->pc = 0x337b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x337ba0: 0xa0890eb0  sb          $t1, 0xEB0($a0)
    ctx->pc = 0x337ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3760), (uint8_t)GPR_U32(ctx, 9));
    // 0x337ba4: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x337ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337ba8: 0xa0880e7a  sb          $t0, 0xE7A($a0)
    ctx->pc = 0x337ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3706), (uint8_t)GPR_U32(ctx, 8));
    // 0x337bac: 0x25430003  addiu       $v1, $t2, 0x3
    ctx->pc = 0x337bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x337bb0: 0xa0e90e44  sb          $t1, 0xE44($a3)
    ctx->pc = 0x337bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3652), (uint8_t)GPR_U32(ctx, 9));
    // 0x337bb4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x337bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337bb8: 0xa0e80e0e  sb          $t0, 0xE0E($a3)
    ctx->pc = 0x337bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3598), (uint8_t)GPR_U32(ctx, 8));
    // 0x337bbc: 0x25430004  addiu       $v1, $t2, 0x4
    ctx->pc = 0x337bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x337bc0: 0xa0e90eb0  sb          $t1, 0xEB0($a3)
    ctx->pc = 0x337bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3760), (uint8_t)GPR_U32(ctx, 9));
    // 0x337bc4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x337bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337bc8: 0xa0e80e7a  sb          $t0, 0xE7A($a3)
    ctx->pc = 0x337bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3706), (uint8_t)GPR_U32(ctx, 8));
    // 0x337bcc: 0x25430005  addiu       $v1, $t2, 0x5
    ctx->pc = 0x337bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
    // 0x337bd0: 0xa0c90e44  sb          $t1, 0xE44($a2)
    ctx->pc = 0x337bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3652), (uint8_t)GPR_U32(ctx, 9));
    // 0x337bd4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x337bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337bd8: 0xa0c80e0e  sb          $t0, 0xE0E($a2)
    ctx->pc = 0x337bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3598), (uint8_t)GPR_U32(ctx, 8));
    // 0x337bdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x337bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337be0: 0xa0c90eb0  sb          $t1, 0xEB0($a2)
    ctx->pc = 0x337be0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3760), (uint8_t)GPR_U32(ctx, 9));
    // 0x337be4: 0xa0c80e7a  sb          $t0, 0xE7A($a2)
    ctx->pc = 0x337be4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3706), (uint8_t)GPR_U32(ctx, 8));
    // 0x337be8: 0xa0a90e44  sb          $t1, 0xE44($a1)
    ctx->pc = 0x337be8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3652), (uint8_t)GPR_U32(ctx, 9));
    // 0x337bec: 0xa0a80e0e  sb          $t0, 0xE0E($a1)
    ctx->pc = 0x337becu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3598), (uint8_t)GPR_U32(ctx, 8));
    // 0x337bf0: 0xa0a90eb0  sb          $t1, 0xEB0($a1)
    ctx->pc = 0x337bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3760), (uint8_t)GPR_U32(ctx, 9));
    // 0x337bf4: 0xa0a80e7a  sb          $t0, 0xE7A($a1)
    ctx->pc = 0x337bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3706), (uint8_t)GPR_U32(ctx, 8));
    // 0x337bf8: 0xa0890e44  sb          $t1, 0xE44($a0)
    ctx->pc = 0x337bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3652), (uint8_t)GPR_U32(ctx, 9));
    // 0x337bfc: 0xa0880e0e  sb          $t0, 0xE0E($a0)
    ctx->pc = 0x337bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3598), (uint8_t)GPR_U32(ctx, 8));
    // 0x337c00: 0xa0890eb0  sb          $t1, 0xEB0($a0)
    ctx->pc = 0x337c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3760), (uint8_t)GPR_U32(ctx, 9));
    // 0x337c04: 0xa0880e7a  sb          $t0, 0xE7A($a0)
    ctx->pc = 0x337c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3706), (uint8_t)GPR_U32(ctx, 8));
    // 0x337c08: 0xa0690e44  sb          $t1, 0xE44($v1)
    ctx->pc = 0x337c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3652), (uint8_t)GPR_U32(ctx, 9));
    // 0x337c0c: 0xa0680e0e  sb          $t0, 0xE0E($v1)
    ctx->pc = 0x337c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3598), (uint8_t)GPR_U32(ctx, 8));
    // 0x337c10: 0xa0690eb0  sb          $t1, 0xEB0($v1)
    ctx->pc = 0x337c10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3760), (uint8_t)GPR_U32(ctx, 9));
    // 0x337c14: 0xa0680e7a  sb          $t0, 0xE7A($v1)
    ctx->pc = 0x337c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3706), (uint8_t)GPR_U32(ctx, 8));
    // 0x337c18: 0x300600ff  andi        $a2, $zero, 0xFF
    ctx->pc = 0x337c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x337c1c: 0x0  nop
    ctx->pc = 0x337c1cu;
    // NOP
label_337c20:
    // 0x337c20: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x337c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x337c24: 0xa0800f1b  sb          $zero, 0xF1B($a0)
    ctx->pc = 0x337c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3867), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c28: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x337c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x337c2c: 0xa0800ee6  sb          $zero, 0xEE6($a0)
    ctx->pc = 0x337c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3814), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c30: 0x28e3002d  slti        $v1, $a3, 0x2D
    ctx->pc = 0x337c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x337c34: 0xa0800f1c  sb          $zero, 0xF1C($a0)
    ctx->pc = 0x337c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3868), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c38: 0xa0800ee7  sb          $zero, 0xEE7($a0)
    ctx->pc = 0x337c38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3815), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c3c: 0xa0800f1d  sb          $zero, 0xF1D($a0)
    ctx->pc = 0x337c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3869), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c40: 0xa0800ee8  sb          $zero, 0xEE8($a0)
    ctx->pc = 0x337c40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3816), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c44: 0xa0800f1e  sb          $zero, 0xF1E($a0)
    ctx->pc = 0x337c44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3870), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c48: 0xa0800ee9  sb          $zero, 0xEE9($a0)
    ctx->pc = 0x337c48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3817), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c4c: 0xa0800f1f  sb          $zero, 0xF1F($a0)
    ctx->pc = 0x337c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3871), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c50: 0xa0800eea  sb          $zero, 0xEEA($a0)
    ctx->pc = 0x337c50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3818), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c54: 0xa0800f20  sb          $zero, 0xF20($a0)
    ctx->pc = 0x337c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3872), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c58: 0xa0800eeb  sb          $zero, 0xEEB($a0)
    ctx->pc = 0x337c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3819), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c5c: 0xa0800f21  sb          $zero, 0xF21($a0)
    ctx->pc = 0x337c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3873), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c60: 0xa0800eec  sb          $zero, 0xEEC($a0)
    ctx->pc = 0x337c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3820), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c64: 0xa0800f22  sb          $zero, 0xF22($a0)
    ctx->pc = 0x337c64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3874), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c68: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x337C68u;
    {
        const bool branch_taken_0x337c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C68u;
        // 0x337c6c: 0xa0800eed  sb          $zero, 0xEED($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3821), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c68) {
            ctx->pc = 0x337C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337c20;
        }
    }
    ctx->pc = 0x337C70u;
    // 0x337c70: 0xf02821  addu        $a1, $a3, $s0
    ctx->pc = 0x337c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x337c74: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x337c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x337c78: 0xa0a00f1b  sb          $zero, 0xF1B($a1)
    ctx->pc = 0x337c78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3867), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c7c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x337c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337c80: 0xa0a60ee6  sb          $a2, 0xEE6($a1)
    ctx->pc = 0x337c80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3814), (uint8_t)GPR_U32(ctx, 6));
    // 0x337c84: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x337c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x337c88: 0xa0800f1b  sb          $zero, 0xF1B($a0)
    ctx->pc = 0x337c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3867), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c8c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x337c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337c90: 0xa0860ee6  sb          $a2, 0xEE6($a0)
    ctx->pc = 0x337c90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3814), (uint8_t)GPR_U32(ctx, 6));
    // 0x337c94: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x337c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x337c98: 0xa0a00f1b  sb          $zero, 0xF1B($a1)
    ctx->pc = 0x337c98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3867), (uint8_t)GPR_U32(ctx, 0));
    // 0x337c9c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x337c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337ca0: 0xa0a60ee6  sb          $a2, 0xEE6($a1)
    ctx->pc = 0x337ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3814), (uint8_t)GPR_U32(ctx, 6));
    // 0x337ca4: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x337ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x337ca8: 0xa0800f1b  sb          $zero, 0xF1B($a0)
    ctx->pc = 0x337ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3867), (uint8_t)GPR_U32(ctx, 0));
    // 0x337cac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x337cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337cb0: 0xa0860ee6  sb          $a2, 0xEE6($a0)
    ctx->pc = 0x337cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3814), (uint8_t)GPR_U32(ctx, 6));
    // 0x337cb4: 0xa0600f1b  sb          $zero, 0xF1B($v1)
    ctx->pc = 0x337cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3867), (uint8_t)GPR_U32(ctx, 0));
    // 0x337cb8: 0xa0660ee6  sb          $a2, 0xEE6($v1)
    ctx->pc = 0x337cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3814), (uint8_t)GPR_U32(ctx, 6));
    // 0x337cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x337CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CC4u;
        // 0x337cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337CCCu;
}
