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

// Function: sub_0029A970
// Address: 0x29a970 - 0x29abd4
void sub_0029A970_0x29a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A970_0x29a970");
#endif

    switch (ctx->pc) {
        case 0x29abb0u: goto label_29abb0;
        default: break;
    }

    ctx->pc = 0x29a970u;

    // 0x29a970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a974: 0x240300b3  addiu       $v1, $zero, 0xB3
    ctx->pc = 0x29a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x29a978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a97c: 0x9085065c  lbu         $a1, 0x65C($a0)
    ctx->pc = 0x29a97cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x29a980: 0x10a30049  beq         $a1, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x29A980u;
    {
        const bool branch_taken_0x29a980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x29A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A980u;
        // 0x29a984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a980) {
            ctx->pc = 0x29AAA8u;
            goto label_29aaa8;
        }
    }
    ctx->pc = 0x29A988u;
    // 0x29a988: 0x240300b2  addiu       $v1, $zero, 0xB2
    ctx->pc = 0x29a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x29a98c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A98Cu;
    {
        const bool branch_taken_0x29a98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a98c) {
            ctx->pc = 0x29A9A0u;
            goto label_29a9a0;
        }
    }
    ctx->pc = 0x29A994u;
    // 0x29a994: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x29A994u;
    {
        const bool branch_taken_0x29a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a994) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29A99Cu;
    // 0x29a99c: 0x0  nop
    ctx->pc = 0x29a99cu;
    // NOP
label_29a9a0:
    // 0x29a9a0: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29a9a4: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x29a9a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x29a9a8: 0x10a00079  beqz        $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x29A9A8u;
    {
        const bool branch_taken_0x29a9a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9A8u;
        // 0x29a9ac: 0x8c6600c4  lw          $a2, 0xC4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9a8) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29A9B0u;
    // 0x29a9b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x29a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29a9b4: 0x14a3003a  bne         $a1, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x29A9B4u;
    {
        const bool branch_taken_0x29a9b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x29a9b4) {
            ctx->pc = 0x29AAA0u;
            goto label_29aaa0;
        }
    }
    ctx->pc = 0x29A9BCu;
    // 0x29a9bc: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x29a9bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x29a9c0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x29a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x29a9c4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x29A9C4u;
    {
        const bool branch_taken_0x29a9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9C4u;
        // 0x29a9c8: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9c4) {
            ctx->pc = 0x29AA80u;
            goto label_29aa80;
        }
    }
    ctx->pc = 0x29A9CCu;
    // 0x29a9cc: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x29A9CCu;
    {
        const bool branch_taken_0x29a9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a9cc) {
            ctx->pc = 0x29AA60u;
            goto label_29aa60;
        }
    }
    ctx->pc = 0x29A9D4u;
    // 0x29a9d4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x29a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x29a9d8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29A9D8u;
    {
        const bool branch_taken_0x29a9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9D8u;
        // 0x29a9dc: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9d8) {
            ctx->pc = 0x29AA40u;
            goto label_29aa40;
        }
    }
    ctx->pc = 0x29A9E0u;
    // 0x29a9e0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x29A9E0u;
    {
        const bool branch_taken_0x29a9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a9e0) {
            ctx->pc = 0x29AA20u;
            goto label_29aa20;
        }
    }
    ctx->pc = 0x29A9E8u;
    // 0x29a9e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29a9ec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A9ECu;
    {
        const bool branch_taken_0x29a9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a9ec) {
            ctx->pc = 0x29AA00u;
            goto label_29aa00;
        }
    }
    ctx->pc = 0x29A9F4u;
    // 0x29a9f4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x29A9F4u;
    {
        const bool branch_taken_0x29a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a9f4) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29A9FCu;
    // 0x29a9fc: 0x0  nop
    ctx->pc = 0x29a9fcu;
    // NOP
label_29aa00:
    // 0x29aa00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29aa04: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AA04u;
    {
        const bool branch_taken_0x29aa04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x29AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA04u;
        // 0x29aa08: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa04) {
            ctx->pc = 0x29AA18u;
            goto label_29aa18;
        }
    }
    ctx->pc = 0x29AA0Cu;
    // 0x29aa0c: 0x14c30060  bne         $a2, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x29AA0Cu;
    {
        const bool branch_taken_0x29aa0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x29aa0c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA14u;
    // 0x29aa14: 0x0  nop
    ctx->pc = 0x29aa14u;
    // NOP
label_29aa18:
    // 0x29aa18: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x29AA18u;
    {
        const bool branch_taken_0x29aa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA18u;
        // 0x29aa1c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa18) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA20u;
label_29aa20:
    // 0x29aa20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29aa24: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AA24u;
    {
        const bool branch_taken_0x29aa24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x29AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA24u;
        // 0x29aa28: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa24) {
            ctx->pc = 0x29AA38u;
            goto label_29aa38;
        }
    }
    ctx->pc = 0x29AA2Cu;
    // 0x29aa2c: 0x14c30058  bne         $a2, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x29AA2Cu;
    {
        const bool branch_taken_0x29aa2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x29aa2c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA34u;
    // 0x29aa34: 0x0  nop
    ctx->pc = 0x29aa34u;
    // NOP
label_29aa38:
    // 0x29aa38: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x29AA38u;
    {
        const bool branch_taken_0x29aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA38u;
        // 0x29aa3c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa38) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA40u;
label_29aa40:
    // 0x29aa40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29aa44: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AA44u;
    {
        const bool branch_taken_0x29aa44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x29AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA44u;
        // 0x29aa48: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa44) {
            ctx->pc = 0x29AA58u;
            goto label_29aa58;
        }
    }
    ctx->pc = 0x29AA4Cu;
    // 0x29aa4c: 0x14c30050  bne         $a2, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x29AA4Cu;
    {
        const bool branch_taken_0x29aa4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x29aa4c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA54u;
    // 0x29aa54: 0x0  nop
    ctx->pc = 0x29aa54u;
    // NOP
label_29aa58:
    // 0x29aa58: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x29AA58u;
    {
        const bool branch_taken_0x29aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA58u;
        // 0x29aa5c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa58) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA60u;
label_29aa60:
    // 0x29aa60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29aa64: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AA64u;
    {
        const bool branch_taken_0x29aa64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x29AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA64u;
        // 0x29aa68: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa64) {
            ctx->pc = 0x29AA78u;
            goto label_29aa78;
        }
    }
    ctx->pc = 0x29AA6Cu;
    // 0x29aa6c: 0x14c30048  bne         $a2, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x29AA6Cu;
    {
        const bool branch_taken_0x29aa6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x29aa6c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA74u;
    // 0x29aa74: 0x0  nop
    ctx->pc = 0x29aa74u;
    // NOP
label_29aa78:
    // 0x29aa78: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x29AA78u;
    {
        const bool branch_taken_0x29aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA78u;
        // 0x29aa7c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa78) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA80u;
label_29aa80:
    // 0x29aa80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29aa84: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AA84u;
    {
        const bool branch_taken_0x29aa84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x29AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA84u;
        // 0x29aa88: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa84) {
            ctx->pc = 0x29AA98u;
            goto label_29aa98;
        }
    }
    ctx->pc = 0x29AA8Cu;
    // 0x29aa8c: 0x14c30040  bne         $a2, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x29AA8Cu;
    {
        const bool branch_taken_0x29aa8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x29aa8c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AA94u;
    // 0x29aa94: 0x0  nop
    ctx->pc = 0x29aa94u;
    // NOP
label_29aa98:
    // 0x29aa98: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x29AA98u;
    {
        const bool branch_taken_0x29aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA98u;
        // 0x29aa9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa98) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AAA0u;
label_29aaa0:
    // 0x29aaa0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x29AAA0u;
    {
        const bool branch_taken_0x29aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAA0u;
        // 0x29aaa4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aaa0) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AAA8u;
label_29aaa8:
    // 0x29aaa8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29aaac: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x29aaacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x29aab0: 0x10c00037  beqz        $a2, . + 4 + (0x37 << 2)
    ctx->pc = 0x29AAB0u;
    {
        const bool branch_taken_0x29aab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAB0u;
        // 0x29aab4: 0x8c6700c4  lw          $a3, 0xC4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aab0) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AAB8u;
    // 0x29aab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29aabc: 0x10c50034  beq         $a2, $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x29AABCu;
    {
        const bool branch_taken_0x29aabc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x29AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AABCu;
        // 0x29aac0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aabc) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AAC4u;
    // 0x29aac4: 0x14c30030  bne         $a2, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x29AAC4u;
    {
        const bool branch_taken_0x29aac4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x29aac4) {
            ctx->pc = 0x29AB88u;
            goto label_29ab88;
        }
    }
    ctx->pc = 0x29AACCu;
    // 0x29aacc: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x29aaccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x29aad0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x29aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x29aad4: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x29AAD4u;
    {
        const bool branch_taken_0x29aad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAD4u;
        // 0x29aad8: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aad4) {
            ctx->pc = 0x29AB70u;
            goto label_29ab70;
        }
    }
    ctx->pc = 0x29AADCu;
    // 0x29aadc: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x29AADCu;
    {
        const bool branch_taken_0x29aadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29aadc) {
            ctx->pc = 0x29AB58u;
            goto label_29ab58;
        }
    }
    ctx->pc = 0x29AAE4u;
    // 0x29aae4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x29aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x29aae8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29AAE8u;
    {
        const bool branch_taken_0x29aae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAE8u;
        // 0x29aaec: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aae8) {
            ctx->pc = 0x29AB40u;
            goto label_29ab40;
        }
    }
    ctx->pc = 0x29AAF0u;
    // 0x29aaf0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29AAF0u;
    {
        const bool branch_taken_0x29aaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29aaf0) {
            ctx->pc = 0x29AB28u;
            goto label_29ab28;
        }
    }
    ctx->pc = 0x29AAF8u;
    // 0x29aaf8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29aafc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AAFCu;
    {
        const bool branch_taken_0x29aafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29aafc) {
            ctx->pc = 0x29AB10u;
            goto label_29ab10;
        }
    }
    ctx->pc = 0x29AB04u;
    // 0x29ab04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29AB04u;
    {
        const bool branch_taken_0x29ab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ab04) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB0Cu;
    // 0x29ab0c: 0x0  nop
    ctx->pc = 0x29ab0cu;
    // NOP
label_29ab10:
    // 0x29ab10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ab14: 0x14e3001e  bne         $a3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x29AB14u;
    {
        const bool branch_taken_0x29ab14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ab14) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB1Cu;
    // 0x29ab1c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29AB1Cu;
    {
        const bool branch_taken_0x29ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB1Cu;
        // 0x29ab20: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab1c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB24u;
    // 0x29ab24: 0x0  nop
    ctx->pc = 0x29ab24u;
    // NOP
label_29ab28:
    // 0x29ab28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ab2c: 0x14e30018  bne         $a3, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29AB2Cu;
    {
        const bool branch_taken_0x29ab2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ab2c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB34u;
    // 0x29ab34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29AB34u;
    {
        const bool branch_taken_0x29ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB34u;
        // 0x29ab38: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab34) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB3Cu;
    // 0x29ab3c: 0x0  nop
    ctx->pc = 0x29ab3cu;
    // NOP
label_29ab40:
    // 0x29ab40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ab44: 0x14e30012  bne         $a3, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x29AB44u;
    {
        const bool branch_taken_0x29ab44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ab44) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB4Cu;
    // 0x29ab4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29AB4Cu;
    {
        const bool branch_taken_0x29ab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB4Cu;
        // 0x29ab50: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab4c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB54u;
    // 0x29ab54: 0x0  nop
    ctx->pc = 0x29ab54u;
    // NOP
label_29ab58:
    // 0x29ab58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ab5c: 0x14e3000c  bne         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29AB5Cu;
    {
        const bool branch_taken_0x29ab5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ab5c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB64u;
    // 0x29ab64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29AB64u;
    {
        const bool branch_taken_0x29ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB64u;
        // 0x29ab68: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab64) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB6Cu;
    // 0x29ab6c: 0x0  nop
    ctx->pc = 0x29ab6cu;
    // NOP
label_29ab70:
    // 0x29ab70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ab74: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29AB74u;
    {
        const bool branch_taken_0x29ab74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ab74) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB7Cu;
    // 0x29ab7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AB7Cu;
    {
        const bool branch_taken_0x29ab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB7Cu;
        // 0x29ab80: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab7c) {
            ctx->pc = 0x29AB90u;
            goto label_29ab90;
        }
    }
    ctx->pc = 0x29AB84u;
    // 0x29ab84: 0x0  nop
    ctx->pc = 0x29ab84u;
    // NOP
label_29ab88:
    // 0x29ab88: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x29ab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29ab8c: 0x0  nop
    ctx->pc = 0x29ab8cu;
    // NOP
label_29ab90:
    // 0x29ab90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ab94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AB94u;
    {
        const bool branch_taken_0x29ab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ab94) {
            ctx->pc = 0x29ABA8u;
            goto label_29aba8;
        }
    }
    ctx->pc = 0x29AB9Cu;
    // 0x29ab9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29AB9Cu;
    {
        const bool branch_taken_0x29ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB9Cu;
        // 0x29aba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab9c) {
            ctx->pc = 0x29ABC8u;
            goto label_29abc8;
        }
    }
    ctx->pc = 0x29ABA4u;
    // 0x29aba4: 0x0  nop
    ctx->pc = 0x29aba4u;
    // NOP
label_29aba8:
    // 0x29aba8: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x29ABA8u;
    SET_GPR_U32(ctx, 31, 0x29ABB0u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x29ABA8u, 0x29ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABB0u;
label_29abb0:
    // 0x29abb0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29abb4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ABB4u;
    {
        const bool branch_taken_0x29abb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29abb4) {
            ctx->pc = 0x29ABC4u;
            goto label_29abc4;
        }
    }
    ctx->pc = 0x29ABBCu;
    // 0x29abbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29ABBCu;
    {
        const bool branch_taken_0x29abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABBCu;
        // 0x29abc0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29abbc) {
            ctx->pc = 0x29ABC8u;
            goto label_29abc8;
        }
    }
    ctx->pc = 0x29ABC4u;
label_29abc4:
    // 0x29abc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x29abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29abc8:
    // 0x29abc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29abc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29abcc: 0x3e00008  jr          $ra
    ctx->pc = 0x29ABCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ABCCu;
        // 0x29abd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ABCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ABD4u;
}
