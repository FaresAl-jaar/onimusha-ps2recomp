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

// Function: sub_003A51B0
// Address: 0x3a51b0 - 0x3a5330
void sub_003A51B0_0x3a51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A51B0_0x3a51b0");
#endif

    switch (ctx->pc) {
        case 0x3a5210u: goto label_3a5210;
        case 0x3a5224u: goto label_3a5224;
        case 0x3a5238u: goto label_3a5238;
        case 0x3a5284u: goto label_3a5284;
        case 0x3a52a8u: goto label_3a52a8;
        case 0x3a52b0u: goto label_3a52b0;
        case 0x3a52c8u: goto label_3a52c8;
        case 0x3a52d4u: goto label_3a52d4;
        case 0x3a52e8u: goto label_3a52e8;
        default: break;
    }

    ctx->pc = 0x3a51b0u;

    // 0x3a51b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a51b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a51b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a51bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a51bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a51c0: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a51c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a51c4: 0x10a3004a  beq         $a1, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x3A51C4u;
    {
        const bool branch_taken_0x3a51c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51C4u;
        // 0x3a51c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51c4) {
            ctx->pc = 0x3A52F0u;
            goto label_3a52f0;
        }
    }
    ctx->pc = 0x3A51CCu;
    // 0x3a51cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a51d0: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3A51D0u;
    {
        const bool branch_taken_0x3a51d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51D0u;
        // 0x3a51d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51d0) {
            ctx->pc = 0x3A5290u;
            goto label_3a5290;
        }
    }
    ctx->pc = 0x3A51D8u;
    // 0x3a51d8: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A51D8u;
    {
        const bool branch_taken_0x3a51d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a51d8) {
            ctx->pc = 0x3A5230u;
            goto label_3a5230;
        }
    }
    ctx->pc = 0x3A51E0u;
    // 0x3a51e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A51E0u;
    {
        const bool branch_taken_0x3a51e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a51e0) {
            ctx->pc = 0x3A51F0u;
            goto label_3a51f0;
        }
    }
    ctx->pc = 0x3A51E8u;
    // 0x3a51e8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3A51E8u;
    {
        const bool branch_taken_0x3a51e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a51e8) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A51F0u;
label_3a51f0:
    // 0x3a51f0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a51f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a51f4: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x3A51F4u;
    {
        const bool branch_taken_0x3a51f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a51f4) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A51FCu;
    // 0x3a51fc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5200: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a5200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a5204: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a5204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a5208: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A5208u;
    SET_GPR_U32(ctx, 31, 0x3A5210u);
    ctx->pc = 0x3A520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5208u;
    // 0x3a520c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A5208u, 0x3A5210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5210u;
label_3a5210:
    // 0x3a5210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5214: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x3a5214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3a5218: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x3a5218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3a521c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A521Cu;
    SET_GPR_U32(ctx, 31, 0x3A5224u);
    ctx->pc = 0x3A5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A521Cu;
    // 0x3a5220: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A521Cu, 0x3A5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5224u;
label_3a5224:
    // 0x3a5224: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3A5224u;
    {
        const bool branch_taken_0x3a5224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5224) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A522Cu;
    // 0x3a522c: 0x0  nop
    ctx->pc = 0x3a522cu;
    // NOP
label_3a5230:
    // 0x3a5230: 0xc0eaac4  jal         func_3AAB10
    ctx->pc = 0x3A5230u;
    SET_GPR_U32(ctx, 31, 0x3A5238u);
    ctx->pc = 0x3AAB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB10u, 0x3A5230u, 0x3A5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5238u;
label_3a5238:
    // 0x3a5238: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A5238u;
    {
        const bool branch_taken_0x3a5238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5238) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A5240u;
    // 0x3a5240: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a5240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a5244: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a5248: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a5248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a524c: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3a524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3a5250: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x3a5250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x3a5254: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a5254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a5258: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a5258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a525c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a525cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5260: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x3a5260u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a5264: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a5264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a5268: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a5268u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a526c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a526cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a5270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a527c: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3A527Cu;
    SET_GPR_U32(ctx, 31, 0x3A5284u);
    ctx->pc = 0x3A5280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A527Cu;
    // 0x3a5280: 0x24440238  addiu       $a0, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3A527Cu, 0x3A5284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5284u;
label_3a5284:
    // 0x3a5284: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3A5284u;
    {
        const bool branch_taken_0x3a5284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5284) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A528Cu;
    // 0x3a528c: 0x0  nop
    ctx->pc = 0x3a528cu;
    // NOP
label_3a5290:
    // 0x3a5290: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a5290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a5294: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A5294u;
    {
        const bool branch_taken_0x3a5294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5294) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A529Cu;
    // 0x3a529c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a52a0: 0xc0eaef8  jal         func_3ABBE0
    ctx->pc = 0x3A52A0u;
    SET_GPR_U32(ctx, 31, 0x3A52A8u);
    ctx->pc = 0x3A52A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A52A0u;
    // 0x3a52a4: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABBE0u, 0x3A52A0u, 0x3A52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A52A8u;
label_3a52a8:
    // 0x3a52a8: 0xc0eaf78  jal         func_3ABDE0
    ctx->pc = 0x3A52A8u;
    SET_GPR_U32(ctx, 31, 0x3A52B0u);
    ctx->pc = 0x3A52ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A52A8u;
    // 0x3a52ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDE0u, 0x3A52A8u, 0x3A52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A52B0u;
label_3a52b0:
    // 0x3a52b0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a52b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a52b4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3a52b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3a52b8: 0x942299f6  lhu         $v0, -0x660A($at)
    ctx->pc = 0x3a52b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x9299F6u));
    // 0x3a52bc: 0x248465b0  addiu       $a0, $a0, 0x65B0
    ctx->pc = 0x3a52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26032));
    // 0x3a52c0: 0xc0fa0bc  jal         func_3E82F0
    ctx->pc = 0x3A52C0u;
    SET_GPR_U32(ctx, 31, 0x3A52C8u);
    ctx->pc = 0x3A52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A52C0u;
    // 0x3a52c4: 0xa6020116  sh          $v0, 0x116($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E82F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E82F0u, 0x3A52C0u, 0x3A52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A52C8u;
label_3a52c8:
    // 0x3a52c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a52cc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A52CCu;
    SET_GPR_U32(ctx, 31, 0x3A52D4u);
    ctx->pc = 0x3A52D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A52CCu;
    // 0x3a52d0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A52CCu, 0x3A52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A52D4u;
label_3a52d4:
    // 0x3a52d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a52d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a52d8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3a52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3a52dc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3a52dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3a52e0: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A52E0u;
    SET_GPR_U32(ctx, 31, 0x3A52E8u);
    ctx->pc = 0x3A52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A52E0u;
    // 0x3a52e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A52E0u, 0x3A52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A52E8u;
label_3a52e8:
    // 0x3a52e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A52E8u;
    {
        const bool branch_taken_0x3a52e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a52e8) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A52F0u;
label_3a52f0:
    // 0x3a52f0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a52f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a52f4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A52F4u;
    {
        const bool branch_taken_0x3a52f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a52f4) {
            ctx->pc = 0x3A5320u;
            goto label_3a5320;
        }
    }
    ctx->pc = 0x3A52FCu;
    // 0x3a52fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a52fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a5300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a5300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a5304: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3a5304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5308: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a5308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a530c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a530cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5310: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a5310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5314: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a5314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5318: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a5318u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a531c: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3a531cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
label_3a5320:
    // 0x3a5320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a5324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5328: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5328u;
        // 0x3a532c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5330u;
}
