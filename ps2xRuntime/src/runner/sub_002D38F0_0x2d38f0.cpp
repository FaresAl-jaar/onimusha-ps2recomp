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

// Function: sub_002D38F0
// Address: 0x2d38f0 - 0x2d3c14
void sub_002D38F0_0x2d38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D38F0_0x2d38f0");
#endif

    switch (ctx->pc) {
        case 0x2d3908u: goto label_2d3908;
        case 0x2d3914u: goto label_2d3914;
        default: break;
    }

    ctx->pc = 0x2d38f0u;

    // 0x2d38f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d38f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d38f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d38fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d38fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3900: 0xc0b44a4  jal         func_2D1290
    ctx->pc = 0x2D3900u;
    SET_GPR_U32(ctx, 31, 0x2D3908u);
    ctx->pc = 0x2D3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3900u;
    // 0x2d3904: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1290u, 0x2D3900u, 0x2D3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3908u;
label_2d3908:
    // 0x2d3908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d390c: 0xc0b446c  jal         func_2D11B0
    ctx->pc = 0x2D390Cu;
    SET_GPR_U32(ctx, 31, 0x2D3914u);
    ctx->pc = 0x2D3910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D390Cu;
    // 0x2d3910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11B0u, 0x2D390Cu, 0x2D3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3914u;
label_2d3914:
    // 0x2d3914: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d3914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d3918: 0x30630021  andi        $v1, $v1, 0x21
    ctx->pc = 0x2d3918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)33);
    // 0x2d391c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D391Cu;
    {
        const bool branch_taken_0x2d391c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D391Cu;
        // 0x2d3920: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d391c) {
            ctx->pc = 0x2D3970u;
            goto label_2d3970;
        }
    }
    ctx->pc = 0x2D3924u;
    // 0x2d3924: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2d3924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x2d3928: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2d3928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d392c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D392Cu;
    {
        const bool branch_taken_0x2d392c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d392c) {
            ctx->pc = 0x2D3970u;
            goto label_2d3970;
        }
    }
    ctx->pc = 0x2D3934u;
    // 0x2d3934: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D3934u;
    {
        const bool branch_taken_0x2d3934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3934) {
            ctx->pc = 0x2D3970u;
            goto label_2d3970;
        }
    }
    ctx->pc = 0x2D393Cu;
    // 0x2d393c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D393Cu;
    {
        const bool branch_taken_0x2d393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d393c) {
            ctx->pc = 0x2D3970u;
            goto label_2d3970;
        }
    }
    ctx->pc = 0x2D3944u;
    // 0x2d3944: 0x8c4529c0  lw          $a1, 0x29C0($v0)
    ctx->pc = 0x2d3944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x2d3948: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2d3948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2d394c: 0x8c4429c8  lw          $a0, 0x29C8($v0)
    ctx->pc = 0x2d394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10696)));
    // 0x2d3950: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x2d3950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2d3954: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2d3954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d3958: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2d3958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2d395c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2d395cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2d3960: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d3960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d3964: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3964u;
    {
        const bool branch_taken_0x2d3964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3964) {
            ctx->pc = 0x2D3978u;
            goto label_2d3978;
        }
    }
    ctx->pc = 0x2D396Cu;
    // 0x2d396c: 0x0  nop
    ctx->pc = 0x2d396cu;
    // NOP
label_2d3970:
    // 0x2d3970: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2D3970u;
    {
        const bool branch_taken_0x2d3970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3970u;
        // 0x2d3974: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3970) {
            ctx->pc = 0x2D3C00u;
            goto label_2d3c00;
        }
    }
    ctx->pc = 0x2D3978u;
label_2d3978:
    // 0x2d3978: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d397c: 0xae2501f0  sw          $a1, 0x1F0($s1)
    ctx->pc = 0x2d397cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 5));
    // 0x2d3980: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d3980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3984: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x2d3984u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2d3988: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3988u;
    {
        const bool branch_taken_0x2d3988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3988u;
        // 0x2d398c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3988) {
            ctx->pc = 0x2D39D0u;
            goto label_2d39d0;
        }
    }
    ctx->pc = 0x2D3990u;
    // 0x2d3990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d3990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3994: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3994u;
    {
        const bool branch_taken_0x2d3994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3994) {
            ctx->pc = 0x2D39C8u;
            goto label_2d39c8;
        }
    }
    ctx->pc = 0x2D399Cu;
    // 0x2d399c: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D399Cu;
    {
        const bool branch_taken_0x2d399c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d399c) {
            ctx->pc = 0x2D39C0u;
            goto label_2d39c0;
        }
    }
    ctx->pc = 0x2D39A4u;
    // 0x2d39a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D39A4u;
    {
        const bool branch_taken_0x2d39a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39a4) {
            ctx->pc = 0x2D39B8u;
            goto label_2d39b8;
        }
    }
    ctx->pc = 0x2D39ACu;
    // 0x2d39ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D39ACu;
    {
        const bool branch_taken_0x2d39ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39ac) {
            ctx->pc = 0x2D39D8u;
            goto label_2d39d8;
        }
    }
    ctx->pc = 0x2D39B4u;
    // 0x2d39b4: 0x0  nop
    ctx->pc = 0x2d39b4u;
    // NOP
label_2d39b8:
    // 0x2d39b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D39B8u;
    {
        const bool branch_taken_0x2d39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39b8) {
            ctx->pc = 0x2D39D8u;
            goto label_2d39d8;
        }
    }
    ctx->pc = 0x2D39C0u;
label_2d39c0:
    // 0x2d39c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D39C0u;
    {
        const bool branch_taken_0x2d39c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39C0u;
        // 0x2d39c4: 0x30a600ff  andi        $a2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39c0) {
            ctx->pc = 0x2D39D8u;
            goto label_2d39d8;
        }
    }
    ctx->pc = 0x2D39C8u;
label_2d39c8:
    // 0x2d39c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D39C8u;
    {
        const bool branch_taken_0x2d39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39C8u;
        // 0x2d39cc: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39c8) {
            ctx->pc = 0x2D39D8u;
            goto label_2d39d8;
        }
    }
    ctx->pc = 0x2D39D0u;
label_2d39d0:
    // 0x2d39d0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x2d39d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d39d4: 0x0  nop
    ctx->pc = 0x2d39d4u;
    // NOP
label_2d39d8:
    // 0x2d39d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D39D8u;
    {
        const bool branch_taken_0x2d39d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39d8) {
            ctx->pc = 0x2D39F8u;
            goto label_2d39f8;
        }
    }
    ctx->pc = 0x2D39E0u;
    // 0x2d39e0: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x2d39e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2d39e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d39e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D39E8u;
    {
        const bool branch_taken_0x2d39e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d39e8) {
            ctx->pc = 0x2D39F8u;
            goto label_2d39f8;
        }
    }
    ctx->pc = 0x2D39F0u;
    // 0x2d39f0: 0x64060004  daddiu      $a2, $zero, 0x4
    ctx->pc = 0x2d39f0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2d39f4: 0x0  nop
    ctx->pc = 0x2d39f4u;
    // NOP
label_2d39f8:
    // 0x2d39f8: 0x922301f9  lbu         $v1, 0x1F9($s1)
    ctx->pc = 0x2d39f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 505)));
    // 0x2d39fc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2d39fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2d3a00: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3A00u;
    {
        const bool branch_taken_0x2d3a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d3a00) {
            ctx->pc = 0x2D3A18u;
            goto label_2d3a18;
        }
    }
    ctx->pc = 0x2D3A08u;
    // 0x2d3a08: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2d3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d3a0c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d3a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d3a10: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D3A10u;
    {
        const bool branch_taken_0x2d3a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a10) {
            ctx->pc = 0x2D3A50u;
            goto label_2d3a50;
        }
    }
    ctx->pc = 0x2D3A18u;
label_2d3a18:
    // 0x2d3a18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d3a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3a1c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3A1Cu;
    {
        const bool branch_taken_0x2d3a1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3a1c) {
            ctx->pc = 0x2D3A30u;
            goto label_2d3a30;
        }
    }
    ctx->pc = 0x2D3A24u;
    // 0x2d3a24: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2D3A24u;
    {
        const bool branch_taken_0x2d3a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A24u;
        // 0x2d3a28: 0xa22601f9  sb          $a2, 0x1F9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 505), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a24) {
            ctx->pc = 0x2D3C00u;
            goto label_2d3c00;
        }
    }
    ctx->pc = 0x2D3A2Cu;
    // 0x2d3a2c: 0x0  nop
    ctx->pc = 0x2d3a2cu;
    // NOP
label_2d3a30:
    // 0x2d3a30: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2d3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2d3a34: 0xae2301f4  sw          $v1, 0x1F4($s1)
    ctx->pc = 0x2d3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 3));
    // 0x2d3a38: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d3a3c: 0xa22301f8  sb          $v1, 0x1F8($s1)
    ctx->pc = 0x2d3a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 504), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3a40: 0xa62001fa  sh          $zero, 0x1FA($s1)
    ctx->pc = 0x2d3a40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3a44: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2D3A44u;
    {
        const bool branch_taken_0x2d3a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A44u;
        // 0x2d3a48: 0xa22601f9  sb          $a2, 0x1F9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 505), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a44) {
            ctx->pc = 0x2D3C00u;
            goto label_2d3c00;
        }
    }
    ctx->pc = 0x2D3A4Cu;
    // 0x2d3a4c: 0x0  nop
    ctx->pc = 0x2d3a4cu;
    // NOP
label_2d3a50:
    // 0x2d3a50: 0x8e2401f4  lw          $a0, 0x1F4($s1)
    ctx->pc = 0x2d3a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x2d3a54: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2D3A54u;
    {
        const bool branch_taken_0x2d3a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A54u;
        // 0x2d3a58: 0x2c81006f  sltiu       $at, $a0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a54) {
            ctx->pc = 0x2D3C00u;
            goto label_2d3c00;
        }
    }
    ctx->pc = 0x2D3A5Cu;
    // 0x2d3a5c: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D3A5Cu;
    {
        const bool branch_taken_0x2d3a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A5Cu;
        // 0x2d3a60: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a5c) {
            ctx->pc = 0x2D3B08u;
            goto label_2d3b08;
        }
    }
    ctx->pc = 0x2D3A64u;
    // 0x2d3a64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d3a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3a68: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3A68u;
    {
        const bool branch_taken_0x2d3a68 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2d3a68) {
            ctx->pc = 0x2D3A7Cu;
            goto label_2d3a7c;
        }
    }
    ctx->pc = 0x2D3A70u;
    // 0x2d3a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3a74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3A74u;
    {
        const bool branch_taken_0x2d3a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A74u;
        // 0x2d3a78: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a74) {
            ctx->pc = 0x2D3A98u;
            goto label_2d3a98;
        }
    }
    ctx->pc = 0x2D3A7Cu;
label_2d3a7c:
    // 0x2d3a7c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2d3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2d3a80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d3a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d3a84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d3a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d3a88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d3a88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3a8c: 0x0  nop
    ctx->pc = 0x2d3a8cu;
    // NOP
    // 0x2d3a90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2d3a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d3a94: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2d3a94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2d3a98:
    // 0x2d3a98: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2d3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2d3a9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d3a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3aa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3aa4: 0x0  nop
    ctx->pc = 0x2d3aa4u;
    // NOP
    // 0x2d3aa8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2d3aa8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2d3aac: 0x0  nop
    ctx->pc = 0x2d3aacu;
    // NOP
    // 0x2d3ab0: 0x0  nop
    ctx->pc = 0x2d3ab0u;
    // NOP
    // 0x2d3ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3ab8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3AB8u;
    {
        const bool branch_taken_0x2d3ab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3ab8) {
            ctx->pc = 0x2D3AC8u;
            goto label_2d3ac8;
        }
    }
    ctx->pc = 0x2D3AC0u;
    // 0x2d3ac0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2d3ac0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d3ac4: 0x0  nop
    ctx->pc = 0x2d3ac4u;
    // NOP
label_2d3ac8:
    // 0x2d3ac8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3ad0: 0x0  nop
    ctx->pc = 0x2d3ad0u;
    // NOP
    // 0x2d3ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d3ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3ad8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3AD8u;
    {
        const bool branch_taken_0x2d3ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3ad8) {
            ctx->pc = 0x2D3AE8u;
            goto label_2d3ae8;
        }
    }
    ctx->pc = 0x2D3AE0u;
    // 0x2d3ae0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2d3ae0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d3ae4: 0x0  nop
    ctx->pc = 0x2d3ae4u;
    // NOP
label_2d3ae8:
    // 0x2d3ae8: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2d3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2d3aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3af0: 0x0  nop
    ctx->pc = 0x2d3af0u;
    // NOP
    // 0x2d3af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d3af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3af8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d3afc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d3afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d3b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3B00u;
    {
        const bool branch_taken_0x2d3b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B00u;
        // 0x2d3b04: 0xa62301fa  sh          $v1, 0x1FA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 506), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b00) {
            ctx->pc = 0x2D3B10u;
            goto label_2d3b10;
        }
    }
    ctx->pc = 0x2D3B08u;
label_2d3b08:
    // 0x2d3b08: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2d3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2d3b0c: 0xa62301fa  sh          $v1, 0x1FA($s1)
    ctx->pc = 0x2d3b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 506), (uint16_t)GPR_U32(ctx, 3));
label_2d3b10:
    // 0x2d3b10: 0x8e2301f4  lw          $v1, 0x1F4($s1)
    ctx->pc = 0x2d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x2d3b14: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x2d3b14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2d3b18: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D3B18u;
    {
        const bool branch_taken_0x2d3b18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b18) {
            ctx->pc = 0x2D3BF0u;
            goto label_2d3bf0;
        }
    }
    ctx->pc = 0x2D3B20u;
    // 0x2d3b20: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3B20u;
    {
        const bool branch_taken_0x2d3b20 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B20u;
        // 0x2d3b24: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b20) {
            ctx->pc = 0x2D3B34u;
            goto label_2d3b34;
        }
    }
    ctx->pc = 0x2D3B28u;
    // 0x2d3b28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3B2Cu;
    {
        const bool branch_taken_0x2d3b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B2Cu;
        // 0x2d3b30: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b2c) {
            ctx->pc = 0x2D3B4Cu;
            goto label_2d3b4c;
        }
    }
    ctx->pc = 0x2D3B34u;
label_2d3b34:
    // 0x2d3b34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d3b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d3b38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d3b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d3b3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d3b3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3b40: 0x0  nop
    ctx->pc = 0x2d3b40u;
    // NOP
    // 0x2d3b44: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2d3b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d3b48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2d3b48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2d3b4c:
    // 0x2d3b4c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2d3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2d3b50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d3b50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3b58: 0x0  nop
    ctx->pc = 0x2d3b58u;
    // NOP
    // 0x2d3b5c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2d3b5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2d3b60: 0x0  nop
    ctx->pc = 0x2d3b60u;
    // NOP
    // 0x2d3b64: 0x0  nop
    ctx->pc = 0x2d3b64u;
    // NOP
    // 0x2d3b68: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d3b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3b6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3B6Cu;
    {
        const bool branch_taken_0x2d3b6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3b6c) {
            ctx->pc = 0x2D3B78u;
            goto label_2d3b78;
        }
    }
    ctx->pc = 0x2D3B74u;
    // 0x2d3b74: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2d3b74u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2d3b78:
    // 0x2d3b78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3b80: 0x0  nop
    ctx->pc = 0x2d3b80u;
    // NOP
    // 0x2d3b84: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2d3b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3b88: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3B88u;
    {
        const bool branch_taken_0x2d3b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3b88) {
            ctx->pc = 0x2D3B98u;
            goto label_2d3b98;
        }
    }
    ctx->pc = 0x2D3B90u;
    // 0x2d3b90: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2d3b90u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2d3b94: 0x0  nop
    ctx->pc = 0x2d3b94u;
    // NOP
label_2d3b98:
    // 0x2d3b98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2d3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2d3b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d3b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3ba0: 0x0  nop
    ctx->pc = 0x2d3ba0u;
    // NOP
    // 0x2d3ba4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d3ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d3ba8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d3bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3bb0: 0x0  nop
    ctx->pc = 0x2d3bb0u;
    // NOP
    // 0x2d3bb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d3bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3bb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3BB8u;
    {
        const bool branch_taken_0x2d3bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3bb8) {
            ctx->pc = 0x2D3BD0u;
            goto label_2d3bd0;
        }
    }
    ctx->pc = 0x2D3BC0u;
    // 0x2d3bc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3bc4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3bc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3BC8u;
    {
        const bool branch_taken_0x2d3bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BC8u;
        // 0x2d3bcc: 0xa22401f8  sb          $a0, 0x1F8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 504), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bc8) {
            ctx->pc = 0x2D3BECu;
            goto label_2d3bec;
        }
    }
    ctx->pc = 0x2D3BD0u;
label_2d3bd0:
    // 0x2d3bd0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3bd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3bd4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d3bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d3bd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3bdc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3be0: 0x0  nop
    ctx->pc = 0x2d3be0u;
    // NOP
    // 0x2d3be4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d3be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d3be8: 0xa22401f8  sb          $a0, 0x1F8($s1)
    ctx->pc = 0x2d3be8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 504), (uint8_t)GPR_U32(ctx, 4));
label_2d3bec:
    // 0x2d3bec: 0x0  nop
    ctx->pc = 0x2d3becu;
    // NOP
label_2d3bf0:
    // 0x2d3bf0: 0x8e2301f4  lw          $v1, 0x1F4($s1)
    ctx->pc = 0x2d3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x2d3bf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d3bf8: 0xae2301f4  sw          $v1, 0x1F4($s1)
    ctx->pc = 0x2d3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 3));
    // 0x2d3bfc: 0x0  nop
    ctx->pc = 0x2d3bfcu;
    // NOP
label_2d3c00:
    // 0x2d3c00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C0Cu;
        // 0x2d3c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3C14u;
}
