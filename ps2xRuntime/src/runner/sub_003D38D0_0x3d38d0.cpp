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

// Function: sub_003D38D0
// Address: 0x3d38d0 - 0x3d41bc
void sub_003D38D0_0x3d38d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D38D0_0x3d38d0");
#endif

    switch (ctx->pc) {
        case 0x3d3928u: goto label_3d3928;
        case 0x3d3960u: goto label_3d3960;
        case 0x3d3970u: goto label_3d3970;
        case 0x3d3a00u: goto label_3d3a00;
        case 0x3d3a14u: goto label_3d3a14;
        case 0x3d3aa4u: goto label_3d3aa4;
        case 0x3d3ab8u: goto label_3d3ab8;
        case 0x3d3ac8u: goto label_3d3ac8;
        case 0x3d3b08u: goto label_3d3b08;
        case 0x3d3b88u: goto label_3d3b88;
        case 0x3d3b98u: goto label_3d3b98;
        case 0x3d3ba8u: goto label_3d3ba8;
        case 0x3d3bdcu: goto label_3d3bdc;
        case 0x3d3e08u: goto label_3d3e08;
        case 0x3d3eacu: goto label_3d3eac;
        case 0x3d3ec0u: goto label_3d3ec0;
        case 0x3d3ed0u: goto label_3d3ed0;
        case 0x3d3ee0u: goto label_3d3ee0;
        case 0x3d3ef0u: goto label_3d3ef0;
        case 0x3d3fa8u: goto label_3d3fa8;
        case 0x3d3fb4u: goto label_3d3fb4;
        case 0x3d3fccu: goto label_3d3fcc;
        case 0x3d406cu: goto label_3d406c;
        case 0x3d4080u: goto label_3d4080;
        case 0x3d4090u: goto label_3d4090;
        case 0x3d40fcu: goto label_3d40fc;
        case 0x3d41a8u: goto label_3d41a8;
        default: break;
    }

    ctx->pc = 0x3d38d0u;

    // 0x3d38d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d38d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3d38d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d38d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d38d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d38dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d38dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d38e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d38e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d38e4: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x3d38e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3d38e8: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3d38e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3d38ec: 0x1020022e  beqz        $at, . + 4 + (0x22E << 2)
    ctx->pc = 0x3D38ECu;
    {
        const bool branch_taken_0x3d38ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38ECu;
        // 0x3d38f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38ec) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D38F4u;
    // 0x3d38f4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3d38f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3d38f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d38fc: 0x24a53240  addiu       $a1, $a1, 0x3240
    ctx->pc = 0x3d38fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12864));
    // 0x3d3900: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d3900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d3904: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d3908: 0x600008  jr          $v1
    ctx->pc = 0x3D3908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D3910u: goto label_3d3910;
            case 0x3D3980u: goto label_3d3980;
            case 0x3D39A0u: goto label_3d39a0;
            case 0x3D3DF0u: goto label_3d3df0;
            case 0x3D3E30u: goto label_3d3e30;
            case 0x3D3FA0u: goto label_3d3fa0;
            case 0x3D3FF0u: goto label_3d3ff0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3908u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D3910u;
label_3d3910:
    // 0x3d3910: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D3910u;
    {
        const bool branch_taken_0x3d3910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3910) {
            ctx->pc = 0x3D3968u;
            goto label_3d3968;
        }
    }
    ctx->pc = 0x3D3918u;
    // 0x3d3918: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d3918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3d391c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d391cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d3920: 0xc0aab60  jal         func_2AAD80
    ctx->pc = 0x3D3920u;
    SET_GPR_U32(ctx, 31, 0x3D3928u);
    ctx->pc = 0x3D3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3920u;
    // 0x3d3924: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAD80u, 0x3D3920u, 0x3D3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3928u;
label_3d3928:
    // 0x3d3928: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x3d3928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x3d392c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d392cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d3930: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d3930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d3934: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3d3934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3d3938: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d3938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d393c: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d393cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d3940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3944: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d3944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d3948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d3948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d394c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d394cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3950: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d3950u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3954: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d3954u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3958: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D3958u;
    SET_GPR_U32(ctx, 31, 0x3D3960u);
    ctx->pc = 0x3D395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3958u;
    // 0x3d395c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D3958u, 0x3D3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3960u;
label_3d3960:
    // 0x3d3960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3960u;
    {
        const bool branch_taken_0x3d3960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3960) {
            ctx->pc = 0x3D3970u;
            goto label_3d3970;
        }
    }
    ctx->pc = 0x3D3968u;
label_3d3968:
    // 0x3d3968: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3968u;
    SET_GPR_U32(ctx, 31, 0x3D3970u);
    ctx->pc = 0x3D396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3968u;
    // 0x3d396c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3968u, 0x3D3970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3970u;
label_3d3970:
    // 0x3d3970: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d3970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d3974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d3978: 0x1000020b  b           . + 4 + (0x20B << 2)
    ctx->pc = 0x3D3978u;
    {
        const bool branch_taken_0x3d3978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3978u;
        // 0x3d397c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3978) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D3980u;
label_3d3980:
    // 0x3d3980: 0x86230526  lh          $v1, 0x526($s1)
    ctx->pc = 0x3d3980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3d3984: 0xa6230512  sh          $v1, 0x512($s1)
    ctx->pc = 0x3d3984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3988: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d3988u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d398c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d398cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3990: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d3990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3994: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d3994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d3998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d399c: 0xa2230521  sb          $v1, 0x521($s1)
    ctx->pc = 0x3d399cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
label_3d39a0:
    // 0x3d39a0: 0x92240522  lbu         $a0, 0x522($s1)
    ctx->pc = 0x3d39a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1314)));
    // 0x3d39a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d39a8: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3D39A8u;
    {
        const bool branch_taken_0x3d39a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39A8u;
        // 0x3d39ac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d39a8) {
            ctx->pc = 0x3D3AE8u;
            goto label_3d3ae8;
        }
    }
    ctx->pc = 0x3D39B0u;
    // 0x3d39b0: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x3D39B0u;
    {
        const bool branch_taken_0x3d39b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d39b0) {
            ctx->pc = 0x3D3AD0u;
            goto label_3d3ad0;
        }
    }
    ctx->pc = 0x3D39B8u;
    // 0x3d39b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d39bc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D39BCu;
    {
        const bool branch_taken_0x3d39bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d39bc) {
            ctx->pc = 0x3D39E0u;
            goto label_3d39e0;
        }
    }
    ctx->pc = 0x3D39C4u;
    // 0x3d39c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D39C4u;
    {
        const bool branch_taken_0x3d39c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d39c4) {
            ctx->pc = 0x3D39D8u;
            goto label_3d39d8;
        }
    }
    ctx->pc = 0x3D39CCu;
    // 0x3d39cc: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x3D39CCu;
    {
        const bool branch_taken_0x3d39cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d39cc) {
            ctx->pc = 0x3D3D40u;
            goto label_3d3d40;
        }
    }
    ctx->pc = 0x3D39D4u;
    // 0x3d39d4: 0x0  nop
    ctx->pc = 0x3d39d4u;
    // NOP
label_3d39d8:
    // 0x3d39d8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3d39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d39dc: 0xa2220522  sb          $v0, 0x522($s1)
    ctx->pc = 0x3d39dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1314), (uint8_t)GPR_U32(ctx, 2));
label_3d39e0:
    // 0x3d39e0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d39e4: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x3d39e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d39e8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3d39e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d39ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d39ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d39f0: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x3d39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d39f4: 0xc62d0554  lwc1        $f13, 0x554($s1)
    ctx->pc = 0x3d39f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d39f8: 0xc097480  jal         func_25D200
    ctx->pc = 0x3D39F8u;
    SET_GPR_U32(ctx, 31, 0x3D3A00u);
    ctx->pc = 0x3D39FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D39F8u;
    // 0x3d39fc: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x3D39F8u, 0x3D3A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3A00u;
label_3d3a00:
    // 0x3d3a00: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x3d3a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x3d3a04: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d3a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d3a08: 0xc62c0574  lwc1        $f12, 0x574($s1)
    ctx->pc = 0x3d3a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d3a0c: 0xc097448  jal         func_25D120
    ctx->pc = 0x3D3A0Cu;
    SET_GPR_U32(ctx, 31, 0x3D3A14u);
    ctx->pc = 0x3D3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3A0Cu;
    // 0x3d3a10: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D120u, 0x3D3A0Cu, 0x3D3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3A14u;
label_3d3a14:
    // 0x3d3a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3A14u;
    {
        const bool branch_taken_0x3d3a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3a14) {
            ctx->pc = 0x3D3A28u;
            goto label_3d3a28;
        }
    }
    ctx->pc = 0x3D3A1Cu;
    // 0x3d3a1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d3a20: 0xa2220522  sb          $v0, 0x522($s1)
    ctx->pc = 0x3d3a20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1314), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d3a24: 0x0  nop
    ctx->pc = 0x3d3a24u;
    // NOP
label_3d3a28:
    // 0x3d3a28: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d3a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3a2c: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x3d3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x3d3a30: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3d3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3d3a34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d3a38: 0xa6240570  sh          $a0, 0x570($s1)
    ctx->pc = 0x3d3a38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3a3c: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d3a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3a40: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3d3a40u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3a44: 0x0  nop
    ctx->pc = 0x3d3a44u;
    // NOP
    // 0x3d3a48: 0x0  nop
    ctx->pc = 0x3d3a48u;
    // NOP
    // 0x3d3a4c: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3a4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d3a50: 0xa6230570  sh          $v1, 0x570($s1)
    ctx->pc = 0x3d3a50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3a54: 0x86230570  lh          $v1, 0x570($s1)
    ctx->pc = 0x3d3a54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3a58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3d3a58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3a5c: 0x0  nop
    ctx->pc = 0x3d3a5cu;
    // NOP
    // 0x3d3a60: 0x0  nop
    ctx->pc = 0x3d3a60u;
    // NOP
    // 0x3d3a64: 0x1010  mfhi        $v0
    ctx->pc = 0x3d3a64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d3a68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D3A68u;
    {
        const bool branch_taken_0x3d3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3a68) {
            ctx->pc = 0x3D3AA8u;
            goto label_3d3aa8;
        }
    }
    ctx->pc = 0x3D3A70u;
    // 0x3d3a70: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d3a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d3a74: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d3a78: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3d3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3d3a7c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d3a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3a84: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d3a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d3a88: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d3a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d3a8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d3a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3a90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d3a90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3a94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d3a94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3a98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d3a98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3a9c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D3A9Cu;
    SET_GPR_U32(ctx, 31, 0x3D3AA4u);
    ctx->pc = 0x3D3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3A9Cu;
    // 0x3d3aa0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D3A9Cu, 0x3D3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3AA4u;
label_3d3aa4:
    // 0x3d3aa4: 0x0  nop
    ctx->pc = 0x3d3aa4u;
    // NOP
label_3d3aa8:
    // 0x3d3aa8: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3d3aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3d3aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3ab0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D3AB0u;
    SET_GPR_U32(ctx, 31, 0x3D3AB8u);
    ctx->pc = 0x3D3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3AB0u;
    // 0x3d3ab4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D3AB0u, 0x3D3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3AB8u;
label_3d3ab8:
    // 0x3d3ab8: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3D3AB8u;
    {
        const bool branch_taken_0x3d3ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AB8u;
        // 0x3d3abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ab8) {
            ctx->pc = 0x3D3D40u;
            goto label_3d3d40;
        }
    }
    ctx->pc = 0x3D3AC0u;
    // 0x3d3ac0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3AC0u;
    SET_GPR_U32(ctx, 31, 0x3D3AC8u);
    ctx->pc = 0x3D3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3AC0u;
    // 0x3d3ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3AC0u, 0x3D3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3AC8u;
label_3d3ac8:
    // 0x3d3ac8: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x3D3AC8u;
    {
        const bool branch_taken_0x3d3ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3ac8) {
            ctx->pc = 0x3D3D40u;
            goto label_3d3d40;
        }
    }
    ctx->pc = 0x3D3AD0u;
label_3d3ad0:
    // 0x3d3ad0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3d3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3d3ad4: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x3d3ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d3ad8: 0x92220522  lbu         $v0, 0x522($s1)
    ctx->pc = 0x3d3ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1314)));
    // 0x3d3adc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d3ae0: 0xa2220522  sb          $v0, 0x522($s1)
    ctx->pc = 0x3d3ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1314), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d3ae4: 0x0  nop
    ctx->pc = 0x3d3ae4u;
    // NOP
label_3d3ae8:
    // 0x3d3ae8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d3aec: 0xc6200578  lwc1        $f0, 0x578($s1)
    ctx->pc = 0x3d3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d3af0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3d3af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d3af4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d3af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d3af8: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x3d3af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d3afc: 0xc62d0554  lwc1        $f13, 0x554($s1)
    ctx->pc = 0x3d3afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d3b00: 0xc097480  jal         func_25D200
    ctx->pc = 0x3D3B00u;
    SET_GPR_U32(ctx, 31, 0x3D3B08u);
    ctx->pc = 0x3D3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3B00u;
    // 0x3d3b04: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x3D3B00u, 0x3D3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3B08u;
label_3d3b08:
    // 0x3d3b08: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x3d3b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x3d3b0c: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x3d3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x3d3b10: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d3b10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3b14: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3d3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3d3b18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d3b1c: 0xa6240570  sh          $a0, 0x570($s1)
    ctx->pc = 0x3d3b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3b20: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d3b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3b24: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3d3b24u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3b28: 0x0  nop
    ctx->pc = 0x3d3b28u;
    // NOP
    // 0x3d3b2c: 0x0  nop
    ctx->pc = 0x3d3b2cu;
    // NOP
    // 0x3d3b30: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3b30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d3b34: 0xa6230570  sh          $v1, 0x570($s1)
    ctx->pc = 0x3d3b34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3b38: 0x86230570  lh          $v1, 0x570($s1)
    ctx->pc = 0x3d3b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3b3c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3d3b3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3b40: 0x0  nop
    ctx->pc = 0x3d3b40u;
    // NOP
    // 0x3d3b44: 0x0  nop
    ctx->pc = 0x3d3b44u;
    // NOP
    // 0x3d3b48: 0x1010  mfhi        $v0
    ctx->pc = 0x3d3b48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d3b4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D3B4Cu;
    {
        const bool branch_taken_0x3d3b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3b4c) {
            ctx->pc = 0x3D3B88u;
            goto label_3d3b88;
        }
    }
    ctx->pc = 0x3D3B54u;
    // 0x3d3b54: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d3b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d3b58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d3b5c: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3d3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3d3b60: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d3b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3b68: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d3b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d3b6c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d3b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d3b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d3b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3b74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d3b74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3b78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d3b78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3b7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d3b7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3b80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D3B80u;
    SET_GPR_U32(ctx, 31, 0x3D3B88u);
    ctx->pc = 0x3D3B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3B80u;
    // 0x3d3b84: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D3B80u, 0x3D3B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3B88u;
label_3d3b88:
    // 0x3d3b88: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3d3b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3d3b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3b90: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D3B90u;
    SET_GPR_U32(ctx, 31, 0x3D3B98u);
    ctx->pc = 0x3D3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3B90u;
    // 0x3d3b94: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D3B90u, 0x3D3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3B98u;
label_3d3b98:
    // 0x3d3b98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3B98u;
    {
        const bool branch_taken_0x3d3b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3B98u;
        // 0x3d3b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3b98) {
            ctx->pc = 0x3D3BA8u;
            goto label_3d3ba8;
        }
    }
    ctx->pc = 0x3D3BA0u;
    // 0x3d3ba0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3BA0u;
    SET_GPR_U32(ctx, 31, 0x3D3BA8u);
    ctx->pc = 0x3D3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3BA0u;
    // 0x3d3ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3BA0u, 0x3D3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3BA8u;
label_3d3ba8:
    // 0x3d3ba8: 0x8623056e  lh          $v1, 0x56E($s1)
    ctx->pc = 0x3d3ba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x3d3bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3BACu;
    {
        const bool branch_taken_0x3d3bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3bac) {
            ctx->pc = 0x3D3BC0u;
            goto label_3d3bc0;
        }
    }
    ctx->pc = 0x3D3BB4u;
    // 0x3d3bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d3bb8: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x3d3bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3bbc: 0x0  nop
    ctx->pc = 0x3d3bbcu;
    // NOP
label_3d3bc0:
    // 0x3d3bc0: 0x8623056e  lh          $v1, 0x56E($s1)
    ctx->pc = 0x3d3bc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x3d3bc4: 0x1c60005e  bgtz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x3D3BC4u;
    {
        const bool branch_taken_0x3d3bc4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d3bc4) {
            ctx->pc = 0x3D3D40u;
            goto label_3d3d40;
        }
    }
    ctx->pc = 0x3D3BCCu;
    // 0x3d3bcc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x3d3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x3d3bd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d3bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d3bd4: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x3D3BD4u;
    SET_GPR_U32(ctx, 31, 0x3D3BDCu);
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x3D3BD4u, 0x3D3BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3BDCu;
label_3d3bdc:
    // 0x3d3bdc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D3BDCu;
    {
        const bool branch_taken_0x3d3bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3BDCu;
        // 0x3d3be0: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3bdc) {
            ctx->pc = 0x3D3C20u;
            goto label_3d3c20;
        }
    }
    ctx->pc = 0x3D3BE4u;
    // 0x3d3be4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3d3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3d3be8: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x3d3be8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3d3bec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d3becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d3bf0: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x3d3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3d3bf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3d3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d3bf8: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d3bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d3bfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3d3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d3c00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d3c04: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x3d3c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3d3c08: 0x7e230550  sq          $v1, 0x550($s1)
    ctx->pc = 0x3d3c08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 3));
    // 0x3d3c0c: 0xc4203264  lwc1        $f0, 0x3264($at)
    ctx->pc = 0x3d3c0cu;
    { uint32_t bits = FAST_READ32(0x683264u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d3c10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d3c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3d3c14: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3D3C14u;
    {
        const bool branch_taken_0x3d3c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C14u;
        // 0x3d3c18: 0xe6200554  swc1        $f0, 0x554($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c14) {
            ctx->pc = 0x3D3D38u;
            goto label_3d3d38;
        }
    }
    ctx->pc = 0x3D3C1Cu;
    // 0x3d3c1c: 0x0  nop
    ctx->pc = 0x3d3c1cu;
    // NOP
label_3d3c20:
    // 0x3d3c20: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3d3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d3c24: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d3c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d3c28: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3d3c2c: 0xc4233260  lwc1        $f3, 0x3260($at)
    ctx->pc = 0x3d3c2cu;
    { uint32_t bits = FAST_READ32(0x683260u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d3c30: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x3d3c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3d3c34: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3d3c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3d3c38: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d3c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d3c3c: 0xc4203270  lwc1        $f0, 0x3270($at)
    ctx->pc = 0x3d3c3cu;
    { uint32_t bits = FAST_READ32(0x683270u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d3c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d3c44: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d3c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3d3c48: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d3c4c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3d3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3d3c50: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3C50u;
    {
        const bool branch_taken_0x3d3c50 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C50u;
        // 0x3d3c54: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c50) {
            ctx->pc = 0x3D3C64u;
            goto label_3d3c64;
        }
    }
    ctx->pc = 0x3D3C58u;
    // 0x3d3c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d3c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3c5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3C5Cu;
    {
        const bool branch_taken_0x3d3c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3C5Cu;
        // 0x3d3c60: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3c5c) {
            ctx->pc = 0x3D3C80u;
            goto label_3d3c80;
        }
    }
    ctx->pc = 0x3D3C64u;
label_3d3c64:
    // 0x3d3c64: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3d3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3d3c68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d3c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d3c6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d3c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d3c70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d3c70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3c74: 0x0  nop
    ctx->pc = 0x3d3c74u;
    // NOP
    // 0x3d3c78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3d3c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d3c7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3d3c7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3d3c80:
    // 0x3d3c80: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x3d3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
    // 0x3d3c84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3d3c88: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3d3c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3d3c8c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d3c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d3c90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d3c90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3c94: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x3d3c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3d3c98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d3c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d3c9c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3d3c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3d3ca0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3d3ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3d3ca4: 0xe6200550  swc1        $f0, 0x550($s1)
    ctx->pc = 0x3d3ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
    // 0x3d3ca8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3d3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d3cac: 0xc4243268  lwc1        $f4, 0x3268($at)
    ctx->pc = 0x3d3cacu;
    { uint32_t bits = FAST_READ32(0x683268u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d3cb0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3d3cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3d3cb4: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d3cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d3cb8: 0xc4203278  lwc1        $f0, 0x3278($at)
    ctx->pc = 0x3d3cb8u;
    { uint32_t bits = FAST_READ32(0x683278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d3cbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d3cc0: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3d3cc4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d3cc8: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3d3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3d3ccc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3CCCu;
    {
        const bool branch_taken_0x3d3ccc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CCCu;
        // 0x3d3cd0: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ccc) {
            ctx->pc = 0x3D3CE0u;
            goto label_3d3ce0;
        }
    }
    ctx->pc = 0x3D3CD4u;
    // 0x3d3cd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d3cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3CD8u;
    {
        const bool branch_taken_0x3d3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3CD8u;
        // 0x3d3cdc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3cd8) {
            ctx->pc = 0x3D3CFCu;
            goto label_3d3cfc;
        }
    }
    ctx->pc = 0x3D3CE0u;
label_3d3ce0:
    // 0x3d3ce0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3d3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3d3ce4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d3ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d3ce8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d3ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d3cec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d3cecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3cf0: 0x0  nop
    ctx->pc = 0x3d3cf0u;
    // NOP
    // 0x3d3cf4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d3cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3d3cf8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d3cf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d3cfc:
    // 0x3d3cfc: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x3d3cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
    // 0x3d3d00: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3d3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3d3d04: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3d3d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3d3d08: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d3d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d3d0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3d3d0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3d10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d3d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d3d14: 0x0  nop
    ctx->pc = 0x3d3d14u;
    // NOP
    // 0x3d3d18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d3d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3d3d1c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3d3d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3d3d20: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3d3d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3d3d24: 0xe6200558  swc1        $f0, 0x558($s1)
    ctx->pc = 0x3d3d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1368), bits); }
    // 0x3d3d28: 0xc4203264  lwc1        $f0, 0x3264($at)
    ctx->pc = 0x3d3d28u;
    { uint32_t bits = FAST_READ32(0x683264u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d3d2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d3d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3d3d30: 0xe6200554  swc1        $f0, 0x554($s1)
    ctx->pc = 0x3d3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
    // 0x3d3d34: 0x0  nop
    ctx->pc = 0x3d3d34u;
    // NOP
label_3d3d38:
    // 0x3d3d38: 0xa2200522  sb          $zero, 0x522($s1)
    ctx->pc = 0x3d3d38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1314), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3d3c: 0x0  nop
    ctx->pc = 0x3d3d3cu;
    // NOP
label_3d3d40:
    // 0x3d3d40: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d3d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d3d44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3D44u;
    {
        const bool branch_taken_0x3d3d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D44u;
        // 0x3d3d48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d44) {
            ctx->pc = 0x3D3D58u;
            goto label_3d3d58;
        }
    }
    ctx->pc = 0x3D3D4Cu;
    // 0x3d3d4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D3D4Cu;
    {
        const bool branch_taken_0x3d3d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3d4c) {
            ctx->pc = 0x3D3DD8u;
            goto label_3d3dd8;
        }
    }
    ctx->pc = 0x3D3D54u;
    // 0x3d3d54: 0x0  nop
    ctx->pc = 0x3d3d54u;
    // NOP
label_3d3d58:
    // 0x3d3d58: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d3d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d3d5c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d3d60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d3d64: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d3d64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3d68: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d3d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d3d6c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D3D6Cu;
    {
        const bool branch_taken_0x3d3d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d3d6c) {
            ctx->pc = 0x3D3DA8u;
            goto label_3d3da8;
        }
    }
    ctx->pc = 0x3D3D74u;
    // 0x3d3d74: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d3d74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d3d78: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d3d78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d3d7c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D3D7Cu;
    {
        const bool branch_taken_0x3d3d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D7Cu;
        // 0x3d3d80: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d7c) {
            ctx->pc = 0x3D3DD0u;
            goto label_3d3dd0;
        }
    }
    ctx->pc = 0x3D3D84u;
    // 0x3d3d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3d88: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d3d88u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3d8c: 0x0  nop
    ctx->pc = 0x3d3d8cu;
    // NOP
    // 0x3d3d90: 0x0  nop
    ctx->pc = 0x3d3d90u;
    // NOP
    // 0x3d3d94: 0x2010  mfhi        $a0
    ctx->pc = 0x3d3d94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d3d98: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d3d98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3d9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D3D9Cu;
    {
        const bool branch_taken_0x3d3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3D9Cu;
        // 0x3d3da0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3d9c) {
            ctx->pc = 0x3D3DD0u;
            goto label_3d3dd0;
        }
    }
    ctx->pc = 0x3D3DA4u;
    // 0x3d3da4: 0x0  nop
    ctx->pc = 0x3d3da4u;
    // NOP
label_3d3da8:
    // 0x3d3da8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d3da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d3dac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d3dacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d3db0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3DB0u;
    {
        const bool branch_taken_0x3d3db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3db0) {
            ctx->pc = 0x3D3DD0u;
            goto label_3d3dd0;
        }
    }
    ctx->pc = 0x3D3DB8u;
    // 0x3d3db8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d3db8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3dc0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d3dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d3dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3DC4u;
    {
        const bool branch_taken_0x3d3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DC4u;
        // 0x3d3dc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3dc4) {
            ctx->pc = 0x3D3DD8u;
            goto label_3d3dd8;
        }
    }
    ctx->pc = 0x3D3DCCu;
    // 0x3d3dcc: 0x0  nop
    ctx->pc = 0x3d3dccu;
    // NOP
label_3d3dd0:
    // 0x3d3dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3dd4: 0x0  nop
    ctx->pc = 0x3d3dd4u;
    // NOP
label_3d3dd8:
    // 0x3d3dd8: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x3D3DD8u;
    {
        const bool branch_taken_0x3d3dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3dd8) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D3DE0u;
    // 0x3d3de0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d3de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d3de4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d3de8: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x3D3DE8u;
    {
        const bool branch_taken_0x3d3de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DE8u;
        // 0x3d3dec: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3de8) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D3DF0u;
label_3d3df0:
    // 0x3d3df0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3DF0u;
    {
        const bool branch_taken_0x3d3df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3df0) {
            ctx->pc = 0x3D3E10u;
            goto label_3d3e10;
        }
    }
    ctx->pc = 0x3D3DF8u;
    // 0x3d3df8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d3df8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3d3dfc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d3dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d3e00: 0xc0aab70  jal         func_2AADC0
    ctx->pc = 0x3D3E00u;
    SET_GPR_U32(ctx, 31, 0x3D3E08u);
    ctx->pc = 0x3D3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E00u;
    // 0x3d3e04: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AADC0u, 0x3D3E00u, 0x3D3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E08u;
label_3d3e08:
    // 0x3d3e08: 0xae220564  sw          $v0, 0x564($s1)
    ctx->pc = 0x3d3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 2));
    // 0x3d3e0c: 0x0  nop
    ctx->pc = 0x3d3e0cu;
    // NOP
label_3d3e10:
    // 0x3d3e10: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3d3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3d3e14: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d3e14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d3e18: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d3e18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d3e1c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d3e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3e20: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d3e20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3e24: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d3e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d3e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d3e2c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d3e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d3e30:
    // 0x3d3e30: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d3e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3e34: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x3d3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x3d3e38: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3d3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3d3e3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d3e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d3e40: 0xa6240570  sh          $a0, 0x570($s1)
    ctx->pc = 0x3d3e40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3e44: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d3e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3e48: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3d3e48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3e4c: 0x0  nop
    ctx->pc = 0x3d3e4cu;
    // NOP
    // 0x3d3e50: 0x0  nop
    ctx->pc = 0x3d3e50u;
    // NOP
    // 0x3d3e54: 0x1810  mfhi        $v1
    ctx->pc = 0x3d3e54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d3e58: 0xa6230570  sh          $v1, 0x570($s1)
    ctx->pc = 0x3d3e58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3e5c: 0x86230570  lh          $v1, 0x570($s1)
    ctx->pc = 0x3d3e5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3e60: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3d3e60u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3e64: 0x0  nop
    ctx->pc = 0x3d3e64u;
    // NOP
    // 0x3d3e68: 0x0  nop
    ctx->pc = 0x3d3e68u;
    // NOP
    // 0x3d3e6c: 0x1010  mfhi        $v0
    ctx->pc = 0x3d3e6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d3e70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D3E70u;
    {
        const bool branch_taken_0x3d3e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3e70) {
            ctx->pc = 0x3D3EB0u;
            goto label_3d3eb0;
        }
    }
    ctx->pc = 0x3D3E78u;
    // 0x3d3e78: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d3e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d3e7c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d3e80: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3d3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3d3e84: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d3e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3e8c: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d3e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d3e90: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d3e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d3e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d3e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3e98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d3e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3e9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d3e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3ea0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d3ea0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3ea4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D3EA4u;
    SET_GPR_U32(ctx, 31, 0x3D3EACu);
    ctx->pc = 0x3D3EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3EA4u;
    // 0x3d3ea8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D3EA4u, 0x3D3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3EACu;
label_3d3eac:
    // 0x3d3eac: 0x0  nop
    ctx->pc = 0x3d3eacu;
    // NOP
label_3d3eb0:
    // 0x3d3eb0: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3d3eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3d3eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3eb8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D3EB8u;
    SET_GPR_U32(ctx, 31, 0x3D3EC0u);
    ctx->pc = 0x3D3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3EB8u;
    // 0x3d3ebc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D3EB8u, 0x3D3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3EC0u;
label_3d3ec0:
    // 0x3d3ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3EC0u;
    {
        const bool branch_taken_0x3d3ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EC0u;
        // 0x3d3ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ec0) {
            ctx->pc = 0x3D3ED0u;
            goto label_3d3ed0;
        }
    }
    ctx->pc = 0x3D3EC8u;
    // 0x3d3ec8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3EC8u;
    SET_GPR_U32(ctx, 31, 0x3D3ED0u);
    ctx->pc = 0x3D3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3EC8u;
    // 0x3d3ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3EC8u, 0x3D3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3ED0u;
label_3d3ed0:
    // 0x3d3ed0: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x3d3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x3d3ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3ed8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D3ED8u;
    SET_GPR_U32(ctx, 31, 0x3D3EE0u);
    ctx->pc = 0x3D3EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3ED8u;
    // 0x3d3edc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D3ED8u, 0x3D3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3EE0u;
label_3d3ee0:
    // 0x3d3ee0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3EE0u;
    {
        const bool branch_taken_0x3d3ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EE0u;
        // 0x3d3ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ee0) {
            ctx->pc = 0x3D3EF0u;
            goto label_3d3ef0;
        }
    }
    ctx->pc = 0x3D3EE8u;
    // 0x3d3ee8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D3EE8u;
    SET_GPR_U32(ctx, 31, 0x3D3EF0u);
    ctx->pc = 0x3D3EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3EE8u;
    // 0x3d3eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D3EE8u, 0x3D3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3EF0u;
label_3d3ef0:
    // 0x3d3ef0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d3ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d3ef4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3EF4u;
    {
        const bool branch_taken_0x3d3ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EF4u;
        // 0x3d3ef8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ef4) {
            ctx->pc = 0x3D3F08u;
            goto label_3d3f08;
        }
    }
    ctx->pc = 0x3D3EFCu;
    // 0x3d3efc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D3EFCu;
    {
        const bool branch_taken_0x3d3efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3efc) {
            ctx->pc = 0x3D3F88u;
            goto label_3d3f88;
        }
    }
    ctx->pc = 0x3D3F04u;
    // 0x3d3f04: 0x0  nop
    ctx->pc = 0x3d3f04u;
    // NOP
label_3d3f08:
    // 0x3d3f08: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d3f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d3f0c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d3f10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d3f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d3f14: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d3f14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3f18: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d3f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d3f1c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D3F1Cu;
    {
        const bool branch_taken_0x3d3f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d3f1c) {
            ctx->pc = 0x3D3F58u;
            goto label_3d3f58;
        }
    }
    ctx->pc = 0x3D3F24u;
    // 0x3d3f24: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d3f24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d3f28: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d3f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d3f2c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D3F2Cu;
    {
        const bool branch_taken_0x3d3f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F2Cu;
        // 0x3d3f30: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f2c) {
            ctx->pc = 0x3D3F80u;
            goto label_3d3f80;
        }
    }
    ctx->pc = 0x3D3F34u;
    // 0x3d3f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3f38: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d3f38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d3f3c: 0x0  nop
    ctx->pc = 0x3d3f3cu;
    // NOP
    // 0x3d3f40: 0x0  nop
    ctx->pc = 0x3d3f40u;
    // NOP
    // 0x3d3f44: 0x2010  mfhi        $a0
    ctx->pc = 0x3d3f44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d3f48: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d3f48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3f4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D3F4Cu;
    {
        const bool branch_taken_0x3d3f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F4Cu;
        // 0x3d3f50: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f4c) {
            ctx->pc = 0x3D3F80u;
            goto label_3d3f80;
        }
    }
    ctx->pc = 0x3D3F54u;
    // 0x3d3f54: 0x0  nop
    ctx->pc = 0x3d3f54u;
    // NOP
label_3d3f58:
    // 0x3d3f58: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d3f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d3f5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d3f5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d3f60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3F60u;
    {
        const bool branch_taken_0x3d3f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3f60) {
            ctx->pc = 0x3D3F80u;
            goto label_3d3f80;
        }
    }
    ctx->pc = 0x3D3F68u;
    // 0x3d3f68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d3f68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d3f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3f70: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d3f70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d3f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3F74u;
    {
        const bool branch_taken_0x3d3f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F74u;
        // 0x3d3f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f74) {
            ctx->pc = 0x3D3F88u;
            goto label_3d3f88;
        }
    }
    ctx->pc = 0x3D3F7Cu;
    // 0x3d3f7c: 0x0  nop
    ctx->pc = 0x3d3f7cu;
    // NOP
label_3d3f80:
    // 0x3d3f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3f84: 0x0  nop
    ctx->pc = 0x3d3f84u;
    // NOP
label_3d3f88:
    // 0x3d3f88: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x3D3F88u;
    {
        const bool branch_taken_0x3d3f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3f88) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D3F90u;
    // 0x3d3f90: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d3f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d3f94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d3f98: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3D3F98u;
    {
        const bool branch_taken_0x3d3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F98u;
        // 0x3d3f9c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f98) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D3FA0u;
label_3d3fa0:
    // 0x3d3fa0: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3D3FA0u;
    SET_GPR_U32(ctx, 31, 0x3D3FA8u);
    ctx->pc = 0x3D3FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3FA0u;
    // 0x3d3fa4: 0x8e240560  lw          $a0, 0x560($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3D3FA0u, 0x3D3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3FA8u;
label_3d3fa8:
    // 0x3d3fa8: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x3d3fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    // 0x3d3fac: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3D3FACu;
    SET_GPR_U32(ctx, 31, 0x3D3FB4u);
    ctx->pc = 0x3D3FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3FACu;
    // 0x3d3fb0: 0x8e240564  lw          $a0, 0x564($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3D3FACu, 0x3D3FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3FB4u;
label_3d3fb4:
    // 0x3d3fb4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3FB4u;
    {
        const bool branch_taken_0x3d3fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FB4u;
        // 0x3d3fb8: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3fb4) {
            ctx->pc = 0x3D3FD0u;
            goto label_3d3fd0;
        }
    }
    ctx->pc = 0x3D3FBCu;
    // 0x3d3fbc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d3fbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3d3fc0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d3fc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d3fc4: 0xc0aab80  jal         func_2AAE00
    ctx->pc = 0x3D3FC4u;
    SET_GPR_U32(ctx, 31, 0x3D3FCCu);
    ctx->pc = 0x3D3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3FC4u;
    // 0x3d3fc8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAE00u, 0x3D3FC4u, 0x3D3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3FCCu;
label_3d3fcc:
    // 0x3d3fcc: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x3d3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_3d3fd0:
    // 0x3d3fd0: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3d3fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3d3fd4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d3fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d3fd8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d3fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d3fdc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d3fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3fe0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d3fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3fe4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d3fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d3fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d3fec: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d3fecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d3ff0:
    // 0x3d3ff0: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d3ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d3ff4: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x3d3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x3d3ff8: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3d3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3d3ffc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d4000: 0xa6240570  sh          $a0, 0x570($s1)
    ctx->pc = 0x3d4000u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d4004: 0x86240570  lh          $a0, 0x570($s1)
    ctx->pc = 0x3d4004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d4008: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3d4008u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d400c: 0x0  nop
    ctx->pc = 0x3d400cu;
    // NOP
    // 0x3d4010: 0x0  nop
    ctx->pc = 0x3d4010u;
    // NOP
    // 0x3d4014: 0x1810  mfhi        $v1
    ctx->pc = 0x3d4014u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d4018: 0xa6230570  sh          $v1, 0x570($s1)
    ctx->pc = 0x3d4018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d401c: 0x86230570  lh          $v1, 0x570($s1)
    ctx->pc = 0x3d401cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x3d4020: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3d4020u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d4024: 0x0  nop
    ctx->pc = 0x3d4024u;
    // NOP
    // 0x3d4028: 0x0  nop
    ctx->pc = 0x3d4028u;
    // NOP
    // 0x3d402c: 0x1010  mfhi        $v0
    ctx->pc = 0x3d402cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d4030: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D4030u;
    {
        const bool branch_taken_0x3d4030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4030) {
            ctx->pc = 0x3D4070u;
            goto label_3d4070;
        }
    }
    ctx->pc = 0x3D4038u;
    // 0x3d4038: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d4038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d403c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d403cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d4040: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3d4040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3d4044: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d4044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d4048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d4048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d404c: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3d404cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3d4050: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d4050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d4054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d4054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d4058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d405c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d405cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4060: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d4060u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4064: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D4064u;
    SET_GPR_U32(ctx, 31, 0x3D406Cu);
    ctx->pc = 0x3D4068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4064u;
    // 0x3d4068: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D4064u, 0x3D406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D406Cu;
label_3d406c:
    // 0x3d406c: 0x0  nop
    ctx->pc = 0x3d406cu;
    // NOP
label_3d4070:
    // 0x3d4070: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3d4070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3d4074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4078: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D4078u;
    SET_GPR_U32(ctx, 31, 0x3D4080u);
    ctx->pc = 0x3D407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4078u;
    // 0x3d407c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D4078u, 0x3D4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4080u;
label_3d4080:
    // 0x3d4080: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4080u;
    {
        const bool branch_taken_0x3d4080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4080u;
        // 0x3d4084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4080) {
            ctx->pc = 0x3D4090u;
            goto label_3d4090;
        }
    }
    ctx->pc = 0x3D4088u;
    // 0x3d4088: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D4088u;
    SET_GPR_U32(ctx, 31, 0x3D4090u);
    ctx->pc = 0x3D408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4088u;
    // 0x3d408c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D4088u, 0x3D4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4090u;
label_3d4090:
    // 0x3d4090: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d4090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d4094: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D4094u;
    {
        const bool branch_taken_0x3d4094 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4094u;
        // 0x3d4098: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4094) {
            ctx->pc = 0x3D4100u;
            goto label_3d4100;
        }
    }
    ctx->pc = 0x3D409Cu;
    // 0x3d409c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D409Cu;
    {
        const bool branch_taken_0x3d409c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d409c) {
            ctx->pc = 0x3D4100u;
            goto label_3d4100;
        }
    }
    ctx->pc = 0x3D40A4u;
    // 0x3d40a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d40a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d40a8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x3d40a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3d40ac: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3d40acu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3d40b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d40b4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d40b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d40b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d40b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d40bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d40bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d40c0: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x3d40c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x3d40c4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3d40c4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3d40c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d40c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d40cc: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3d40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x3d40d0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3d40d0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3d40d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d40d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d40d8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3d40d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3d40dc: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3d40dcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3d40e0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d40e0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d40e4: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3d40e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3d40e8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d40e8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d40ec: 0x9226056c  lbu         $a2, 0x56C($s1)
    ctx->pc = 0x3d40ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1388)));
    // 0x3d40f0: 0xc62c0568  lwc1        $f12, 0x568($s1)
    ctx->pc = 0x3d40f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d40f4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3D40F4u;
    SET_GPR_U32(ctx, 31, 0x3D40FCu);
    ctx->pc = 0x3D40F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D40F4u;
    // 0x3d40f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3D40F4u, 0x3D40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D40FCu;
label_3d40fc:
    // 0x3d40fc: 0x0  nop
    ctx->pc = 0x3d40fcu;
    // NOP
label_3d4100:
    // 0x3d4100: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d4100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d4104: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4104u;
    {
        const bool branch_taken_0x3d4104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4104u;
        // 0x3d4108: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4104) {
            ctx->pc = 0x3D4118u;
            goto label_3d4118;
        }
    }
    ctx->pc = 0x3D410Cu;
    // 0x3d410c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D410Cu;
    {
        const bool branch_taken_0x3d410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d410c) {
            ctx->pc = 0x3D4198u;
            goto label_3d4198;
        }
    }
    ctx->pc = 0x3D4114u;
    // 0x3d4114: 0x0  nop
    ctx->pc = 0x3d4114u;
    // NOP
label_3d4118:
    // 0x3d4118: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d4118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d411c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d4120: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d4120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d4124: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d4124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d4128: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d4128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d412c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D412Cu;
    {
        const bool branch_taken_0x3d412c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d412c) {
            ctx->pc = 0x3D4168u;
            goto label_3d4168;
        }
    }
    ctx->pc = 0x3D4134u;
    // 0x3d4134: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d4134u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d4138: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d4138u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d413c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D413Cu;
    {
        const bool branch_taken_0x3d413c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D413Cu;
        // 0x3d4140: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d413c) {
            ctx->pc = 0x3D4190u;
            goto label_3d4190;
        }
    }
    ctx->pc = 0x3D4144u;
    // 0x3d4144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4148: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d4148u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d414c: 0x0  nop
    ctx->pc = 0x3d414cu;
    // NOP
    // 0x3d4150: 0x0  nop
    ctx->pc = 0x3d4150u;
    // NOP
    // 0x3d4154: 0x2010  mfhi        $a0
    ctx->pc = 0x3d4154u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d4158: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d4158u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d415c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D415Cu;
    {
        const bool branch_taken_0x3d415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D415Cu;
        // 0x3d4160: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d415c) {
            ctx->pc = 0x3D4190u;
            goto label_3d4190;
        }
    }
    ctx->pc = 0x3D4164u;
    // 0x3d4164: 0x0  nop
    ctx->pc = 0x3d4164u;
    // NOP
label_3d4168:
    // 0x3d4168: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d4168u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d416c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d416cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d4170: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D4170u;
    {
        const bool branch_taken_0x3d4170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4170) {
            ctx->pc = 0x3D4190u;
            goto label_3d4190;
        }
    }
    ctx->pc = 0x3D4178u;
    // 0x3d4178: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d4178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d417c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4180: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d4180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d4184: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4184u;
    {
        const bool branch_taken_0x3d4184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4184u;
        // 0x3d4188: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4184) {
            ctx->pc = 0x3D4198u;
            goto label_3d4198;
        }
    }
    ctx->pc = 0x3D418Cu;
    // 0x3d418c: 0x0  nop
    ctx->pc = 0x3d418cu;
    // NOP
label_3d4190:
    // 0x3d4190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d4190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4194: 0x0  nop
    ctx->pc = 0x3d4194u;
    // NOP
label_3d4198:
    // 0x3d4198: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4198u;
    {
        const bool branch_taken_0x3d4198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4198u;
        // 0x3d419c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4198) {
            ctx->pc = 0x3D41A8u;
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D41A0u;
    // 0x3d41a0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D41A0u;
    SET_GPR_U32(ctx, 31, 0x3D41A8u);
    ctx->pc = 0x3D41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D41A0u;
    // 0x3d41a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D41A0u, 0x3D41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D41A8u;
label_3d41a8:
    // 0x3d41a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d41a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d41ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d41acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d41b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d41b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d41b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D41B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41B4u;
        // 0x3d41b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D41B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D41BCu;
}
