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

// Function: sub_001A41F0
// Address: 0x1a41f0 - 0x1a43e0
void sub_001A41F0_0x1a41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A41F0_0x1a41f0");
#endif

    switch (ctx->pc) {
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a4314u: goto label_1a4314;
        case 0x1a43b4u: goto label_1a43b4;
        default: break;
    }

    ctx->pc = 0x1a41f0u;

    // 0x1a41f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a41f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a41f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a41f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a41f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a41f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a41fc: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x1a41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x1a4200: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1A4200u;
    {
        const bool branch_taken_0x1a4200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4200u;
        // 0x1a4204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4200) {
            ctx->pc = 0x1A43D0u;
            goto label_1a43d0;
        }
    }
    ctx->pc = 0x1A4208u;
    // 0x1a4208: 0x8f858794  lw          $a1, -0x786C($gp)
    ctx->pc = 0x1a4208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x1a420c: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1A420Cu;
    {
        const bool branch_taken_0x1a420c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A420Cu;
        // 0x1a4210: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a420c) {
            ctx->pc = 0x1A43D0u;
            goto label_1a43d0;
        }
    }
    ctx->pc = 0x1A4214u;
    // 0x1a4214: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x1A4214u;
    SET_GPR_U32(ctx, 31, 0x1A421Cu);
    ctx->pc = 0x1A4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4214u;
    // 0x1a4218: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1A4214u, 0x1A421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A421Cu;
label_1a421c:
    // 0x1a421c: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1A421Cu;
    {
        const bool branch_taken_0x1a421c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a421c) {
            ctx->pc = 0x1A43D0u;
            goto label_1a43d0;
        }
    }
    ctx->pc = 0x1A4224u;
    // 0x1a4224: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x1a4224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x1a4228: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4228u;
    {
        const bool branch_taken_0x1a4228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4228) {
            ctx->pc = 0x1A4248u;
            goto label_1a4248;
        }
    }
    ctx->pc = 0x1A4230u;
    // 0x1a4230: 0x93858788  lbu         $a1, -0x7878($gp)
    ctx->pc = 0x1a4230u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1a4234: 0x8f848794  lw          $a0, -0x786C($gp)
    ctx->pc = 0x1a4234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x1a4238: 0xc069000  jal         func_1A4000
    ctx->pc = 0x1A4238u;
    SET_GPR_U32(ctx, 31, 0x1A4240u);
    ctx->pc = 0x1A423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4238u;
    // 0x1a423c: 0x9386878c  lbu         $a2, -0x7874($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4000u, 0x1A4238u, 0x1A4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4240u;
label_1a4240:
    // 0x1a4240: 0xaf80879c  sw          $zero, -0x7864($gp)
    ctx->pc = 0x1a4240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 0));
    // 0x1a4244: 0x0  nop
    ctx->pc = 0x1a4244u;
    // NOP
label_1a4248:
    // 0x1a4248: 0x16000061  bnez        $s0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1A4248u;
    {
        const bool branch_taken_0x1a4248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4248) {
            ctx->pc = 0x1A43D0u;
            goto label_1a43d0;
        }
    }
    ctx->pc = 0x1A4250u;
    // 0x1a4250: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1A4250u;
    {
        const bool branch_taken_0x1a4250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4250u;
        // 0x1a4254: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4250) {
            ctx->pc = 0x1A43C0u;
            goto label_1a43c0;
        }
    }
    ctx->pc = 0x1A4258u;
label_1a4258:
    // 0x1a4258: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a4258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a425c: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x1a425cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a4260: 0x8f86877c  lw          $a2, -0x7884($gp)
    ctx->pc = 0x1a4260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
    // 0x1a4264: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4268: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x1a426c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4270: 0x24423c50  addiu       $v0, $v0, 0x3C50
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15440));
    // 0x1a4274: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a4274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a4278: 0x93858784  lbu         $a1, -0x787C($gp)
    ctx->pc = 0x1a4278u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1a427c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4280: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x1a4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x1a4284: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x1a4284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1a4288: 0x24860280  addiu       $a2, $a0, 0x280
    ctx->pc = 0x1a4288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x1a428c: 0xc041442  jal         func_105108
    ctx->pc = 0x1A428Cu;
    SET_GPR_U32(ctx, 31, 0x1A4294u);
    ctx->pc = 0x1A4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A428Cu;
    // 0x1a4290: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A428Cu, 0x1A4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4294u;
label_1a4294:
    // 0x1a4294: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a4294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a4298: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x1a4298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x1a429c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x1a429cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a42a0: 0x24633c5c  addiu       $v1, $v1, 0x3C5C
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15452));
    // 0x1a42a4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a42a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a42a8: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x1a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x1a42ac: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1a42acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a42b0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1a42b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1a42b4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a42b8: 0x24423c50  addiu       $v0, $v0, 0x3C50
    ctx->pc = 0x1a42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15440));
    // 0x1a42bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a42c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a42c4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a42c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a42cc: 0x24460290  addiu       $a2, $v0, 0x290
    ctx->pc = 0x1a42ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x1a42d0: 0x8f85877c  lw          $a1, -0x7884($gp)
    ctx->pc = 0x1a42d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
    // 0x1a42d4: 0x93828784  lbu         $v0, -0x787C($gp)
    ctx->pc = 0x1a42d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1a42d8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1a42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1a42dc: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x1a42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x1a42e0: 0xc041442  jal         func_105108
    ctx->pc = 0x1A42E0u;
    SET_GPR_U32(ctx, 31, 0x1A42E8u);
    ctx->pc = 0x1A42E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42E0u;
    // 0x1a42e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A42E0u, 0x1A42E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42E8u;
label_1a42e8:
    // 0x1a42e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a42ec: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x1a42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x1a42f0: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x1a42f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a42f4: 0x24423c50  addiu       $v0, $v0, 0x3C50
    ctx->pc = 0x1a42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15440));
    // 0x1a42f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a42f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a42fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a42fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a4300: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4304: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a4308: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a4308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a430c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A430Cu;
    SET_GPR_U32(ctx, 31, 0x1A4314u);
    ctx->pc = 0x1A4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A430Cu;
    // 0x1a4310: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A430Cu, 0x1A4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4314u;
label_1a4314:
    // 0x1a4314: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a4314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a4318: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1a4318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x1a431c: 0x703023  subu        $a2, $v1, $s0
    ctx->pc = 0x1a431cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4320: 0x24843c6c  addiu       $a0, $a0, 0x3C6C
    ctx->pc = 0x1a4320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15468));
    // 0x1a4324: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1a4324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4328: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x1a432c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1a432cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a4330: 0x24633c50  addiu       $v1, $v1, 0x3C50
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15440));
    // 0x1a4334: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a4334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a4338: 0x3c060085  lui         $a2, 0x85
    ctx->pc = 0x1a4338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)133 << 16));
    // 0x1a433c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4340: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4344: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a4344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a4348: 0x24c6f180  addiu       $a2, $a2, -0xE80
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963584));
    // 0x1a434c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1a434cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1a4350: 0x24680140  addiu       $t0, $v1, 0x140
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x1a4354: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1a4354u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x84F180u));
    // 0x1a4358: 0x3c070085  lui         $a3, 0x85
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)133 << 16));
    // 0x1a435c: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x1a4360: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a4360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a4364: 0x24e7f180  addiu       $a3, $a3, -0xE80
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963584));
    // 0x1a4368: 0x24843c50  addiu       $a0, $a0, 0x3C50
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
    // 0x1a436c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4374: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x1a4374u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x1a4378: 0x703023  subu        $a2, $v1, $s0
    ctx->pc = 0x1a4378u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a437c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4380: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1a4380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1a4384: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1a4384u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a4388: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x1a4388u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a438c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a438cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a4390: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a4390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a4394: 0x24850150  addiu       $a1, $a0, 0x150
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1a4398: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1a4398u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1a439c: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x1a439cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x1a43a0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a43a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a43a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A43A4u;
    {
        const bool branch_taken_0x1a43a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a43a4) {
            ctx->pc = 0x1A43B8u;
            goto label_1a43b8;
        }
    }
    ctx->pc = 0x1A43ACu;
    // 0x1a43ac: 0xc068ca8  jal         func_1A32A0
    ctx->pc = 0x1A43ACu;
    SET_GPR_U32(ctx, 31, 0x1A43B4u);
    ctx->pc = 0x1A32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A32A0u, 0x1A43ACu, 0x1A43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43B4u;
label_1a43b4:
    // 0x1a43b4: 0x0  nop
    ctx->pc = 0x1a43b4u;
    // NOP
label_1a43b8:
    // 0x1a43b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a43bc: 0x0  nop
    ctx->pc = 0x1a43bcu;
    // NOP
label_1a43c0:
    // 0x1a43c0: 0x2e030040  sltiu       $v1, $s0, 0x40
    ctx->pc = 0x1a43c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a43c4: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1A43C4u;
    {
        const bool branch_taken_0x1a43c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a43c4) {
            ctx->pc = 0x1A4258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4258;
        }
    }
    ctx->pc = 0x1A43CCu;
    // 0x1a43cc: 0x0  nop
    ctx->pc = 0x1a43ccu;
    // NOP
label_1a43d0:
    // 0x1a43d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a43d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a43d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a43d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a43d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A43D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43D8u;
        // 0x1a43dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A43E0u;
}
